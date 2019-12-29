using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Symbols;
using System.Collections.Immutable;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using System.Runtime.InteropServices;
using Microsoft.CodeAnalysis.FindSymbols;

namespace CS2X.Core.Transpilers.C
{
	public sealed partial class Transpiler_C
	{
		private bool WriteRuntimeType(ITypeSymbol type, StreamWriterEx writer)
		{
			if (type.SpecialType == SpecialType.System_Void) return false;
			if (type.TypeKind == TypeKind.Interface) return false;
			if (type.Kind == SymbolKind.NamedType && ((INamedTypeSymbol)type).IsGenericType && !IsResolvedGenericType((INamedTypeSymbol)type)) return false;
			if (IsCS2XAttributeType(type)) return false;
			if (GetNativeTypeAttribute(type, NativeTarget.C, out _)) return false;

			string runtimeTypeName = GetRuntimeTypeFullName(type);
			writer.WriteLine($"typedef struct {runtimeTypeName}");
			writer.WriteLine('{');
			writer.AddTab();

			// runtime type pointer
			writer.WriteLinePrefix($"{GetTypeFullName(specialTypes.runtimeType)} runtimeType;");

			// array element size
			if (type.Kind == SymbolKind.ArrayType) writer.WriteLinePrefix("size_t elementSize;");

			// vtable methods
			var virtualMethods = GetOrderedVirtualMethods(type);
			foreach (var method in virtualMethods)
			{
				if (method.MethodKind == MethodKind.DelegateInvoke) continue;// ignore delegate invoke virtual
				if (method.IsStatic) throw new NotSupportedException("Virtual static method not supported: " + method.Name);

				var resolvedMethod = method;
				void WriteResolvedMethod()
				{
					writer.WritePrefix($"{GetTypeFullNameRef(resolvedMethod.ReturnType)} (*{GetVTableMethodFullName(resolvedMethod)})(");
					if (type.IsReferenceType) writer.Write($"{GetTypeFullNameRef(type)} self");
					else writer.Write($"{GetTypeFullName(type)}* self");
					if (resolvedMethod.Parameters.Length != 0) writer.Write(", ");
					WriteParameters(resolvedMethod.Parameters);
					writer.WriteLine(");");
				}

				if (method.IsGenericMethod)
				{
					if (IsResolvedGenericMethod(method)) throw new Exception("Expected unresolved generic method");
					foreach (var genericMethod in genericMethods)// write all permutations
					{
						if (genericMethod.ConstructedFrom.Equals(method))
						{
							resolvedMethod = genericMethod;
							WriteResolvedMethod();
						}
					}
				}
				else
				{
					WriteResolvedMethod();
				}
			}
			writer.RemoveTab();
			writer.WriteLine($"}} {runtimeTypeName};");
			writer.WriteLine($"{runtimeTypeName} {GetRuntimeTypeObjFullName(type)};");

			string name = type.Name();
			writer.Write($"int8_t {GetRuntimeTypeMetadataFullName(type)}_Name[{GetStringMemorySize(name)}] = ");
			writer.Write(StringToLiteral(name));
			writer.WriteLine($"; /* {name} */");

			string fullName = type.FullName();
			writer.Write($"int8_t {GetRuntimeTypeMetadataFullName(type)}_FullName[{GetStringMemorySize(fullName)}] = ");
			writer.Write(StringToLiteral(fullName));
			writer.WriteLine($"; /* {fullName} */");

			return true;
		}

		private bool WriteType(INamedTypeSymbol type, bool writeBody)
		{
			if (type.SpecialType == SpecialType.System_Void) return false;
			if (type.TypeKind == TypeKind.Interface) return false;
			if (type.IsGenericType && !IsResolvedGenericType(type)) return false;
			if (IsCS2XAttributeType(type)) return false;
			if (GetNativeTypeAttribute(type, NativeTarget.C, out _)) return false;

			if (!writeBody)
			{
				if (IsPrimitiveType(type)) return false;

				if (type.TypeKind == TypeKind.Enum)
				{
					writer.WriteLine($"typedef {GetPrimitiveName(type.EnumUnderlyingType)} {GetTypeFullName(type)};");
				}
				else if (type.TypeKind == TypeKind.Interface)
				{
					writer.WriteLine($"typedef void {GetTypeFullName(type)};");
				}
				else
				{
					if (type.IsReferenceType || !IsEmptyType(type))
					{
						writer.WriteLine(string.Format("typedef struct {0} {0};", GetTypeFullName(type)));
					}
					else
					{
						string ptr;
						if (type.IsValueType) ptr = "*";
						else ptr = string.Empty;
						writer.WriteLine($"typedef void{ptr} {GetTypeFullName(type)};");
					}
				}
			}
			else if (type.TypeKind == TypeKind.Enum)
			{
				var members = type.GetMembers();
				foreach (var member in members)
				{
					if (!member.IsStatic) continue;
					if (member is IFieldSymbol)
					{
						var field = (IFieldSymbol)member;
						writer.WriteLine($"#define {GetFieldFullName(field)} {field.ConstantValue.ToString()}");
					}
				}
				return members.Length != 0;
			}
			else
			{
				if ((type.IsReferenceType || !IsEmptyType(type)) && !IsPrimitiveType(type))
				{
					// get all types that should write non-static fields
					var objTypeChain = new List<INamedTypeSymbol>();
					objTypeChain.Add(type);
					var baseType = type.BaseType;
					while (baseType != null)
					{
						objTypeChain.Add(baseType);
						baseType = baseType.BaseType;
					}
					objTypeChain.Reverse();

					// write non-static fields
					writer.WriteLine($"struct {GetTypeFullName(type)}");
					writer.WriteLine('{');
					writer.AddTab();
					if (type.IsReferenceType) writer.WriteLinePrefix($"{GetTypeFullName(specialTypes.runtimeType)}* CS2X_RuntimeType;");
					foreach (var subType in objTypeChain)
					{
						foreach (var member in subType.GetMembers())
						{
							if (member.IsStatic) continue;
							if (member is IFieldSymbol) WriteField((IFieldSymbol)member);
						}
					}
					writer.RemoveTab();
					writer.WriteLine("};");
				}

				// write static fields
				foreach (var member in type.GetMembers())
				{
					if (!member.IsStatic) continue;
					if (member is IFieldSymbol) WriteField((IFieldSymbol)member);
				}
			}

			return true;
		}

		private void WriteField(IFieldSymbol field)
		{
			if (field.Type.TypeKind == TypeKind.Interface) throw new NotSupportedException("Fields cannot be an interface type");
			if (!field.IsFixedSizeBuffer)
			{
				writer.WriteLinePrefix($"{GetTypeFullNameRef(field.Type)} {GetFieldFullName(field)};");
			}
			else
			{
				var syntaxRef = field.DeclaringSyntaxReferences.First();
				var syntax = (VariableDeclaratorSyntax)syntaxRef.GetSyntax();
				var arg = syntax.ArgumentList.Arguments[0];
				writer.WritePrefix($"{GetTypeFullName(field.Type)} {GetFieldFullName(field)}[");
				WriteExpression(arg.Expression);
				writer.WriteLine("];");
			}
		}

		private bool WriteMethod(IMethodSymbol method, bool writeBody)
		{
			this.method = method;
			if (method.ContainingType.SpecialType == SpecialType.System_Void) return false;
			if (method.ContainingType.IsGenericType && !IsResolvedGenericType(method.ContainingType)) return false;
			if (method.IsAbstract) return false;
			if (method.IsGenericMethod && !IsResolvedGenericMethod(method)) return false;
			if (specialTypes.IgnoredSpecialGenericInterfaceMethod(method)) return false;

			// extra generic validation
			if (method.IsGenericMethod)
			{
				if (method.TypeArguments.Length != method.TypeParameters.Length) throw new Exception("TypeArguments and TypeParameters for generic method length don't match: " + method.FullName());
				for (int i = 0; i != method.TypeArguments.Length; ++i)
				{
					var arg = method.TypeArguments[i];
					var param = method.TypeParameters[i];
					if (arg.Equals(param)) throw new Exception("TypeArguments and TypeParameters for generic method don't match: " + method.FullName());
				}
			}

			// check if we're a auto virtual property
			bool isVirtualAutoPropertyMethod = false;
			if (IsAutoPropertyMethod(method, out _, out var virtualAutoPropertyField))
			{
				if (!IsVirtualMethod(method)) return false;// if we're not virtual backing field will be used
				isVirtualAutoPropertyMethod = true;
			}

			// skip method if CS2X attribute type
			if (IsCS2XAttributeType(method.ContainingType)) return false;

			// skip if type is native type
			if (GetNativeTypeAttribute(method.ContainingType, NativeTarget.C, out _))
			{
				if (method.IsExtern && !method.IsStatic) throw new NotSupportedException("Non-Static extern methods on native C types are not supported");
				if (method.MethodKind != MethodKind.Constructor && method.MethodKind != MethodKind.StaticConstructor && method.MethodKind != MethodKind.Ordinary)
				{
					return false;
				}
			}

			// skip if method is native extern
			if (method.IsExtern && GetNativeExternAttribute(method, NativeTarget.C, out _)) return false;

			// validate method type is supported
			switch (method.MethodKind)
			{
				case MethodKind.Ordinary:
				case MethodKind.Constructor:
				case MethodKind.StaticConstructor:
				case MethodKind.Destructor:
				case MethodKind.PropertyGet:
				case MethodKind.PropertySet:
				case MethodKind.UserDefinedOperator:
				case MethodKind.Conversion:
				case MethodKind.ExplicitInterfaceImplementation:
				case MethodKind.DelegateInvoke:
					break;
				default: throw new NotSupportedException("Unsupported method kind: " + method.MethodKind);
			}

			// skip if method is custom IEnumerable / IEnumerator implimitation detail methods
			if (IsIEnumerable_GetEnumerator(method)) return false;
			if (IsIEnumerator_Current(method)) return false;

			// validate method doesn't return interface
			if (method.ReturnType.TypeKind == TypeKind.Interface) throw new NotSupportedException("Methods cannot return an interface: " + method.FullName());

			// handle special interop / dllimport method
			bool isDllImportMethod = false;
			if (method.IsStatic && method.IsExtern)
			{
				if (GetDllImportAttribute(method, out var attribute))
				{
					isDllImportMethod = true;
					if (!writeBody)
					{
						string callingConventionName;
						if (attribute.NamedArguments.Any(x => x.Key == "CallingConvention"))
						{
							var callingConvention = attribute.NamedArguments.First(x => x.Key == "CallingConvention");
							var callingConventionValue = (CallingConvention)callingConvention.Value.Value;
							callingConventionName = $"__{callingConventionValue.ToString().ToLower()} ";
						}
						else
						{
							callingConventionName = string.Empty;
						}
						writer.WritePrefix($"{GetTypeFullNameRef(method.ReturnType)} ({callingConventionName}*{GetMethodFullName(method)})(");
						var lastParameter = method.Parameters.LastOrDefault();
						foreach (var parameter in method.Parameters)
						{
							string ptr = string.Empty;
							writer.Write(GetTypeFullNameRef(parameter.Type));
							if (IsParameterPassByRef(parameter)) writer.Write('*');
							if (lastParameter != null && !parameter.Equals(lastParameter)) writer.Write(", ");
						}
						writer.WriteLine(");");
						return true;
					}
				}
				else if (method.ContainingType.SpecialType == SpecialType.System_IntPtr || method.ContainingType.SpecialType == SpecialType.System_UIntPtr)
				{
					return false;// skip if native int helper method
				}
			}

			// write method desc
			if (method.MethodKind != MethodKind.Constructor) writer.WritePrefix($"{GetTypeFullNameRef(method.ReturnType)} {GetMethodFullName(method)}");
			else writer.WritePrefix($"{GetTypeFullNameRef(method.ContainingType)} {GetMethodFullName(method)}");
			if (isDllImportMethod) writer.Write("_DllNotFoundException");
			writer.Write('(');
			if (!method.IsStatic && method.MethodKind != MethodKind.Constructor)
			{
				writer.Write($"{GetTypeFullName(method.ContainingType)}* self");
				if (method.Parameters.Length != 0) writer.Write(", ");
			}
			else if (!method.IsStatic && method.MethodKind == MethodKind.Constructor && method.ContainingType.IsReferenceType)
			{
				writer.Write($"{GetTypeFullName(method.ContainingType)}* self");
				if (method.Parameters.Length != 0) writer.Write(", ");
			}
			WriteParameters(method.Parameters);

			// reset statement locals
			allStatementLocals.Clear();

			// write method block
			if (!writeBody)
			{
				writer.WriteLine(");");
			}
			else
			{
				writer.WriteLine(')');
				writer.WriteLine('{');
				writer.AddTab();
				tryCatchNestingLevel = 0;

				if (method.MethodKind == MethodKind.Constructor)
				{
					var type = method.ContainingType;
					if (type.IsValueType)
					{
						if (method.IsImplicitlyDeclared)
						{
							writer.WriteLinePrefix($"{GetTypeFullNameRef(type)} selfObj = {{0}};");
						}
						else if (!IsInternalCall(method))
						{
							writer.WriteLinePrefix($"{GetTypeFullNameRef(type)} selfObj;");
							writer.WriteLinePrefix($"{GetTypeFullName(type)}* self = &selfObj;");
						}
					}
				}

				if (!method.IsImplicitlyDeclared)
				{
					if (!method.IsExtern)
					{
						if (method.DeclaringSyntaxReferences.Length != 1) throw new Exception("Method can only be defined in one location: " + method.Name);
						var reference = method.DeclaringSyntaxReferences.First();
						var syntaxDeclaration = reference.GetSyntax();
						using (var stream = new MemoryStream())
						using (instructionalBody = new InstructionalBody(stream, writer))
						{
							var origWriter = writer;
							writer = instructionalBody;
							if (syntaxDeclaration is MethodDeclarationSyntax)
							{
								var syntax = (MethodDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null)
								{
									WriteBody(syntax.Body);
								}
								else if (syntax.ExpressionBody != null)
								{
									if (syntax.ExpressionBody.Expression is ThrowExpressionSyntax)
									{
										WriteExpression(syntax.ExpressionBody.Expression);
									}
									else
									{
										if (!method.ReturnsVoid) writer.WritePrefix("return ");
										else writer.WritePrefix();
										WriteExpression(syntax.ExpressionBody.Expression);
										writer.WriteLine(';');
									}
								}
								else
								{
									throw new NotSupportedException("Unsupported empty method syntax: " + method.Name);
								}
							}
							else if (syntaxDeclaration is ConstructorDeclarationSyntax)
							{
								var syntax = (ConstructorDeclarationSyntax)syntaxDeclaration;
								if (!method.IsStatic && method.ContainingType.IsReferenceType)
								{
									if (syntax.Initializer != null)
									{
										var semanticModel = GetSemanticModel(syntax.Initializer);
										var superConstructor = (IMethodSymbol)semanticModel.GetSymbolInfo(syntax.Initializer).Symbol;
										writer.WritePrefix(GetMethodFullName(superConstructor));
										writer.Write("(self");
										var args = syntax.Initializer.ArgumentList.Arguments;
										if (args.Count != 0) writer.Write(", ");
										var last = args.LastOrDefault();
										foreach (var arg in args)
										{
											WriteExpression(arg.Expression);
											if (arg != last) writer.Write(", ");
										}
										writer.WriteLine(");");
									}
									else if (method.ContainingType.BaseType != null)
									{
										var baseConstructor = FindDefaultConstructor(method.ContainingType.BaseType);
										writer.WriteLinePrefix($"{GetMethodFullName(baseConstructor)}(self);");
									}
								}
								WriteContrustorFieldInitializers(method);
								if (syntax.Body != null) WriteBody(syntax.Body);
								else throw new NotSupportedException("Constructor body cannot be emtpy: " + syntax.ToString());
							}
							else if (syntaxDeclaration is DestructorDeclarationSyntax)
							{
								var syntax = (DestructorDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null) WriteBody(syntax.Body);
								else throw new NotSupportedException("Destructor body cannot be emtpy: " + syntax.ToString());
								if (method.ContainingType.BaseType != null && FindDestructor(method.ContainingType.BaseType, out var destructor))
								{
									writer.WriteLinePrefix(GetMethodFullName(destructor) + "(self);");
								}
							}
							else if (syntaxDeclaration is AccessorDeclarationSyntax)
							{
								var syntax = (AccessorDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null)
								{
									WriteBody(syntax.Body);
								}
								else if (isVirtualAutoPropertyMethod)
								{
									if (method.IsStatic) throw new NotSupportedException("Virtual auto property cannot be static");
									if (syntax.ExpressionBody != null && syntax.ExpressionBody.Expression is ThrowExpressionSyntax)
									{
										WriteExpression(syntax.ExpressionBody.Expression);
									}
									else
									{
										if (method.MethodKind == MethodKind.PropertyGet) writer.WriteLinePrefix($"return self->{GetFieldFullName(virtualAutoPropertyField)};");
										else if (method.MethodKind == MethodKind.PropertySet) writer.WriteLinePrefix($"self->{GetFieldFullName(virtualAutoPropertyField)} = {GetParameterFullName(method.Parameters[0])};");
										else throw new NotImplementedException("Virtual auto property method kind is invalid: " + method.MethodKind);
									}
								}
								else if (syntax.ExpressionBody != null)
								{
									if (syntax.ExpressionBody.Expression is ThrowExpressionSyntax)
									{
										WriteExpression(syntax.ExpressionBody.Expression);
									}
									else
									{
										if (method.MethodKind == MethodKind.PropertyGet)
										{
											writer.WritePrefix("return ");
											WriteExpression(syntax.ExpressionBody.Expression);
											writer.WriteLine(';');
										}
										else if (method.MethodKind == MethodKind.PropertySet)
										{
											WriteExpression(syntax.ExpressionBody.Expression);
										}
										else
										{
											throw new NotImplementedException("Unsupported property method kind is: " + method.MethodKind);
										}
									}
								}
								else
								{
									throw new NotImplementedException("Unsupported empty AccessorDeclarationSyntax: " + syntax.ToFullString());
								}
							}
							else if (syntaxDeclaration is ArrowExpressionClauseSyntax)
							{
								var syntax = (ArrowExpressionClauseSyntax)syntaxDeclaration;
								writer.WritePrefix("return ");
								WriteExpression(syntax.Expression);
								writer.WriteLine(';');
							}
							else if (syntaxDeclaration is OperatorDeclarationSyntax)
							{
								var syntax = (OperatorDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null) WriteBody(syntax.Body);
								else throw new NotSupportedException("Operator body cannot be emtpy: " + syntax.ToString());
							}
							else if (syntaxDeclaration is ConversionOperatorDeclarationSyntax)
							{
								var syntax = (ConversionOperatorDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null) WriteBody(syntax.Body);
								else throw new NotSupportedException("Operator body cannot be emtpy: " + syntax.ToString());
							}
							else
							{
								throw new NotSupportedException("Unsupported method syntax body: " + syntaxDeclaration.GetType());
							}

							// write define locals
							writer = origWriter;
							foreach (var local in instructionalBody.locals)
							{
								writer.WriteLinePrefix($"{GetTypeFullNameRef(local.type)} {local.name};");
							}
							foreach (var local in instructionalBody.specialLocals)
							{
								writer.WriteLinePrefix($"{local.type} {local.name};");
							}
						}
					}
					else if (IsInternalCall(method))
					{
						var type = method.ContainingType;
						string fullNamespace = type.FullNamespace();
						if (fullNamespace == "System")
						{
							if (type.Name == "Object")
							{
								if (method.Name == "GetType")
								{
									string typeName = GetTypeFullName(specialTypes.typeType);
									writer.WriteLinePrefix($"return ({typeName}*)self->CS2X_RuntimeType;");
								}
								else
								{
									throw new NotSupportedException("Unsupported internal Object method: " + method.Name);
								}
							}
							else if (type.Name == "Type")
							{
								if (method.Name == "GetTypeFromHandle")
								{
									var handle = method.Parameters[0];
									var field = FindFieldByName(handle.Type, "m_type");
									writer.WriteLinePrefix($"return {GetParameterFullName(handle)}.{GetFieldFullName(field)};");
								}
								else
								{
									throw new NotSupportedException("Unsupported internal Type method: " + method.Name);
								}
							}
							else if (type.Name == "String")
							{
								if (method.Name == "get_Length")
								{
									var field = FindFieldByName(method.ContainingType, "_stringLength");
									writer.WriteLinePrefix($"return self->{GetFieldFullName(field)};");
								}
								else if (method.Name == "FastAllocateString")
								{
									var field = FindFieldByName(method.ContainingType, "_stringLength");
									string lengthName = GetParameterFullName(method.Parameters[0]);
									writer.WriteLinePrefix($"{GetTypeFullName(method.ContainingType)}* result = CS2X_GC_NewAtomic(sizeof(intptr_t) + sizeof(int32_t) + sizeof(char16_t) + (sizeof(char16_t) * {lengthName}), 0);");
									writer.WriteLinePrefix($"result->CS2X_RuntimeType = &{GetRuntimeTypeObjFullName(method.ContainingType)};");
									writer.WriteLinePrefix($"result->{GetFieldFullName(field)} = {lengthName};");
									writer.WriteLinePrefix("return result;");
								}
								else if (method.MethodKind == MethodKind.Constructor && method.Parameters.Length == 1 && method.Parameters[0].Type.TypeKind == TypeKind.Pointer)
								{
									var stringLengthField = FindFieldByName(method.ContainingType, "_stringLength");
									var firstCharField = FindFieldByName(method.ContainingType, "_firstChar");
									string parameterName = GetParameterFullName(method.Parameters[0]);
									writer.WriteLinePrefix("int length = 0;");
									writer.WriteLinePrefix("char16_t* charOffset;");
									writer.WriteLinePrefix($"charOffset = {parameterName};");
									writer.WriteLinePrefix("while (*charOffset != 0)");
									writer.WriteLinePrefix('{');
									writer.AddTab();
									writer.WriteLinePrefix("++charOffset;");
									writer.WriteLinePrefix("++length;");
									writer.RemoveTab();
									writer.WriteLinePrefix('}');
									writer.WriteLinePrefix("self = CS2X_GC_Resize(self, ArrayOffset + sizeof(char16_t), ArrayOffset + sizeof(char16_t) + (sizeof(char16_t) * length));");
									writer.WriteLinePrefix($"self->{GetFieldFullName(stringLengthField)} = length;");
									writer.WriteLinePrefix($"memcpy(&self->{GetFieldFullName(firstCharField)}, {parameterName}, sizeof(char16_t) * length);");
									writer.WriteLinePrefix("return self;");
								}
								else if (method.MethodKind == MethodKind.Constructor && method.Parameters.Length == 1 && method.Parameters[0].Type.TypeKind == TypeKind.Array)
								{
									var stringLengthField = FindFieldByName(method.ContainingType, "_stringLength");
									var firstCharField = FindFieldByName(method.ContainingType, "_firstChar");
									string parameterName = GetParameterFullName(method.Parameters[0]);
									writer.WriteLinePrefix("int length = 0;");
									writer.WriteLinePrefix("char16_t* charBuffer;");
									writer.WriteLinePrefix($"length = *(int*)(((char*){parameterName}) + sizeof(intptr_t));");
									writer.WriteLinePrefix($"charBuffer = {parameterName} + ArrayOffset;");
									writer.WriteLinePrefix("self = CS2X_GC_Resize(self, ArrayOffset + sizeof(char16_t), ArrayOffset + sizeof(char16_t) + (sizeof(char16_t) * length));");
									writer.WriteLinePrefix($"self->{GetFieldFullName(stringLengthField)} = length;");
									writer.WriteLinePrefix($"memcpy(&self->{GetFieldFullName(firstCharField)}, charBuffer, sizeof(char16_t) * length);");
									writer.WriteLinePrefix("return self;");
								}
								else if (method.MethodKind == MethodKind.Constructor && method.Parameters.Length == 2 && method.Parameters[0].Type.SpecialType == SpecialType.System_Char && method.Parameters[1].Type.SpecialType == SpecialType.System_Int32)
								{
									var stringLengthField = FindFieldByName(method.ContainingType, "_stringLength");
									var firstCharField = FindFieldByName(method.ContainingType, "_firstChar");
									string parameterChar = GetParameterFullName(method.Parameters[0]);
									string parameterLength = GetParameterFullName(method.Parameters[1]);
									writer.WriteLinePrefix("int i;");
									writer.WriteLinePrefix("char16_t* charBuff;");
									writer.WriteLinePrefix($"self = CS2X_GC_Resize(self, ArrayOffset + sizeof(char16_t), ArrayOffset + sizeof(char16_t) + (sizeof(char16_t) * {parameterLength}));");
									writer.WriteLinePrefix($"self->{GetFieldFullName(stringLengthField)} = {parameterLength};");
									writer.WriteLinePrefix($"charBuff = &self->{GetFieldFullName(firstCharField)};");
									writer.WriteLinePrefix($"for (i = 0; i != {parameterLength}; ++i) charBuff[i] = {parameterChar};");
									writer.WriteLinePrefix("return self;");
								}
								else
								{
									throw new NotSupportedException("Unsupported internal String method: " + method.Name);
								}
							}
							else if (type.Name == "Array")
							{
								if (method.Name == "get_Length")
								{
									writer.WriteLinePrefix("return (int32_t)(*((intptr_t*)self + 1));");
								}
								else if (method.Name == "get_LongLength")
								{
									writer.WriteLinePrefix("return (int64_t)(*((intptr_t*)self + 1));");
								}
								else if (method.Name == "GetElementSize")
								{
									string arrayParamName = GetParameterFullName(method.Parameters[0]);
									string runtimeTypeName = GetTypeFullName(specialTypes.runtimeType);
									writer.WriteLinePrefix($"return *(int32_t*)((char*){arrayParamName}->CS2X_RuntimeType + sizeof({runtimeTypeName}));");
								}
								else if (method.Name == "FastResize")
								{
									string arrayParamName = GetParameterFullName(method.Parameters[0]);
									string newLengthParamName = GetParameterFullName(method.Parameters[1]);
									string elementSizeParamName = GetParameterFullName(method.Parameters[2]);
									writer.WriteLinePrefix($"{GetTypeFullName(specialTypes.runtimeType)}* runtimeType = (*{arrayParamName})->CS2X_RuntimeType;");
									writer.WriteLinePrefix($"size_t oldSize = (size_t)(*((intptr_t*)(*{arrayParamName}) + 1));");
									writer.WriteLinePrefix($"(*{arrayParamName}) = CS2X_GC_Resize((*{arrayParamName}), oldSize, (size_t)(ArrayOffset + ({elementSizeParamName} * {newLengthParamName})));");
									writer.WriteLinePrefix($"(*{arrayParamName})->CS2X_RuntimeType = runtimeType;");
									writer.WriteLinePrefix($"(*((intptr_t*)(*{arrayParamName}) + 1)) = {newLengthParamName};");
								}
								else
								{
									throw new NotSupportedException("Unsupported internal Array method: " + method.Name);
								}
							}
							else if (type.Name == "IntPtr" || type.Name == "UIntPtr")
							{
								var i = new IntPtr();
								var i2 = (int)i;
								if (method.MethodKind == MethodKind.Constructor && method.Parameters[0].Type.SpecialType == SpecialType.System_Int32)
								{
									var valueParam = method.Parameters[0];
									writer.WriteLinePrefix($"return (int32_t){GetParameterFullName(valueParam)};");
								}
								else if (method.MethodKind == MethodKind.Constructor && method.Parameters[0].Type.SpecialType == SpecialType.System_UInt32)
								{
									var valueParam = method.Parameters[0];
									writer.WriteLinePrefix($"return (uint32_t){GetParameterFullName(valueParam)};");
								}
								else if (method.MethodKind == MethodKind.Constructor && method.Parameters[0].Type.SpecialType == SpecialType.System_Int64)
								{
									var valueParam = method.Parameters[0];
									writer.WriteLinePrefix($"return (int64_t){GetParameterFullName(valueParam)};");
								}
								else if (method.MethodKind == MethodKind.Constructor && method.Parameters[0].Type.SpecialType == SpecialType.System_UInt64)
								{
									var valueParam = method.Parameters[0];
									writer.WriteLinePrefix($"return (uint64_t){GetParameterFullName(valueParam)};");
								}
								else if (method.MethodKind == MethodKind.Constructor && method.Parameters[0].Type.Kind == SymbolKind.PointerType)
								{
									var valueParam = method.Parameters[0];
									writer.WriteLinePrefix($"return ({type.Name.ToLower()}_t){GetParameterFullName(valueParam)};");
								}
								else
								{
									throw new NotSupportedException($"Unsupported constructor {type.Name} method: " + method.Name);
								}
							}
							else if (type.Name == "EqualityComparer")
							{
								if (method.Name == "GenericCompare")
								{
									var typeParam = method.TypeArguments[0];
									var param1 = method.Parameters[0];
									var param2 = method.Parameters[1];
									string refPrefix = typeParam.IsValueType ? "&" : "";
									writer.WriteLinePrefix($"return memcmp({refPrefix}{GetParameterFullName(param1)}, {refPrefix}{GetParameterFullName(param2)}, sizeof({GetTypeFullNameRef(typeParam)})) == 0;");
								}
								else
								{
									throw new NotSupportedException($"Unsupported EqualityComparer method: " + method.Name);
								}
							}
							else if (type.Name == "Enum")
							{
								if (method.Name == "ToString")
								{
									var emptyString = FindFieldByName(specialTypes.stringType, "Empty");
									writer.WriteLinePrefix($"return {GetFieldFullName(emptyString)};");
								}
								else
								{
									throw new NotSupportedException($"Unsupported Enum method: " + method.Name);
								}
							}
							else
							{
								throw new NotSupportedException("Unsupported internal method in type: " + type.Name);
							}
						}
						else if (fullNamespace == "System.Runtime.InteropServices")
						{
							if (type.Name == "Marshal")
							{
								if (method.Name == "SizeOf")
								{
									var typeArg = method.TypeArguments[0];
									writer.WriteLinePrefix($"return sizeof({GetTypeFullNameRef(typeArg)});");
								}
								else if (method.Name == "GetNativePointerForObject")
								{
									writer.WriteLinePrefix($"return ({GetTypeFullNameRef(method.ReturnType)}){GetParameterFullName(method.Parameters[0])};");
								}
								else if (method.Name == "GetNativePointerForArray")
								{
									writer.WriteLinePrefix($"return (intptr_t)((char*){GetParameterFullName(method.Parameters[0])} + ArrayOffset);");
								}
								else if (method.Name == "GetFunctionPointerForDelegate")
								{
									var delegateType = method.TypeArguments[0];
									var invokeMethod = FindMethodByName(delegateType, "Invoke");
									string returnType = GetTypeFullNameRef(method.ReturnType);
									writer.WriteLinePrefix($"{returnType} result;");
									writer.WriteLinePrefix($"result = &{GetMethodFullName(invokeMethod)};");
									string delegateParam = GetParameterFullName(method.Parameters[0]);
									var methodPtrField = FindFieldByName(specialTypes.delegateType, "_methodPtr");
									writer.WriteLinePrefix($"*{GetParameterFullName(method.Parameters[1])} = ({returnType}){delegateParam};");
									writer.WriteLinePrefix($"*{GetParameterFullName(method.Parameters[2])} = {delegateParam}->{GetFieldFullName(methodPtrField)};");
									writer.WriteLinePrefix("return result;");
								}
								else if (method.Name == "GetDelegateForFunctionPointer")
								{
									var delegateType = method.TypeArguments[0];
									var constructor = FindDelegateConstructor(delegateType);
									writer.WriteLinePrefix($"return {GetMethodFullName(constructor)}({GetNewObjectMethod(delegateType)}(sizeof({GetTypeFullName(delegateType)}), &{GetRuntimeTypeObjFullName(delegateType)}, 0), 0, {GetParameterFullName(method.Parameters[0])});");
								}
								else if (method.Name == "GetHINSTANCE")
								{
									if (options.api == API.Win32 || options.api == API.Win16) writer.WriteLinePrefix("return CS2X_hInstance;");
									else writer.WriteLinePrefix("return 0;");
								}
								else
								{
									throw new NotSupportedException("Unsupported internal Mashal method: " + method.Name);
								}
							}
							else
							{
								throw new NotSupportedException("Unsupported internal method in type: " + type.Name);
							}
						}
						else
						{
							throw new NotSupportedException("Unsupported internal method in namespace: " + fullNamespace);
						}
					}
					else if (isDllImportMethod)
					{
						if (WriteDllImportMethodBind(method, out string methodName))
						{
							writer.WriteLinePrefix($"if ({methodName} != 0)");
							writer.WriteLinePrefix('{');
							writer.AddTab();
							if (!method.ReturnsVoid) writer.WritePrefix("return ");
							else writer.WritePrefix();
							writer.Write($"{methodName}(");
							var lastParamter = method.Parameters.LastOrDefault();
							foreach (var parameter in method.Parameters)
							{
								writer.Write(GetParameterFullName(parameter));
								if (!parameter.Equals(lastParamter)) writer.Write(", ");
							}
							writer.WriteLine(");");
							if (method.ReturnsVoid) writer.WriteLinePrefix("return;");
							writer.RemoveTab();
							writer.WriteLinePrefix('}');
						}

						string objectTypeName = GetTypeFullName(specialTypes.objectType);
						var dllNotFoundExceptionType = solution.coreLibProject.compilation.GetTypeByMetadataName("System.DllNotFoundException");
						var dllNotFoundExceptionTypeConstructor = FindDefaultConstructor(dllNotFoundExceptionType);
						writer.WriteLinePrefix($"CS2X_ThreadExceptionObject = {GetMethodFullName(dllNotFoundExceptionTypeConstructor)}(CS2X_AllocType(sizeof({GetTypeFullName(dllNotFoundExceptionType)}), &{GetRuntimeTypeObjFullName(dllNotFoundExceptionType)}, 0));");
						writer.WriteLinePrefix("longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */");
					}
					else if (method.ContainingType.SpecialType == SpecialType.System_IntPtr || method.ContainingType.SpecialType == SpecialType.System_UIntPtr)
					{
						if (method.MethodKind != MethodKind.UserDefinedOperator && method.MethodKind != MethodKind.Conversion)
						{
							throw new NotSupportedException("Unsupported IntPtr method: " + method.FullName());
						}
					}
					else
					{
						throw new NotSupportedException("Unsupported method extern: " + method.Name);
					}
				}
				else if (method.MethodKind == MethodKind.Constructor || method.MethodKind == MethodKind.StaticConstructor)
				{
					if (!method.IsStatic && method.ContainingType.IsReferenceType && method.ContainingType.BaseType != null)
					{
						var baseConstructor = FindDefaultConstructor(method.ContainingType.BaseType);
						writer.WritePrefix(GetMethodFullName(baseConstructor));
						writer.WriteLine("(self);");
					}
					WriteContrustorFieldInitializers(method);

					// write multicast delegate implementation detail
					if (method.ContainingType != null && method.ContainingType.BaseType != null && method.ContainingType.BaseType.Equals(specialTypes.multicastDelegateType))
					{
						var selfField = FindFieldByName(specialTypes.multicastDelegateType.BaseType, "_target");
						var funcField = FindFieldByName(specialTypes.multicastDelegateType.BaseType, "_methodPtr");
						writer.WriteLinePrefix($"self->{GetFieldFullName(selfField)} = {GetParameterFullName(method.Parameters[0])};");
						writer.WriteLinePrefix($"self->{GetFieldFullName(funcField)} = {GetParameterFullName(method.Parameters[1])};");
					}
				}
				else if (method.MethodKind == MethodKind.DelegateInvoke)
				{
					void WriteParameterArgTypes()
					{
						var last = method.Parameters.LastOrDefault();
						foreach (var parameter in method.Parameters)
						{
							writer.Write(GetTypeFullNameRef(parameter.Type));
							if (last != null && !parameter.Equals(last)) writer.Write(", ");
						}
					}

					void WriteParameterArgs()
					{
						var last = method.Parameters.LastOrDefault();
						foreach (var parameter in method.Parameters)
						{
							writer.Write(GetParameterFullName(parameter));
							if (last != null && !parameter.Equals(last)) writer.Write(", ");
						}
					}

					var selfField = FindFieldByName(specialTypes.multicastDelegateType.BaseType, "_target");
					var funcField = FindFieldByName(specialTypes.multicastDelegateType.BaseType, "_methodPtr");
					var nextField = FindFieldByName(specialTypes.multicastDelegateType, "_next");
					string selfFieldName = GetFieldFullName(selfField);
					string funcFieldName = GetFieldFullName(funcField);
					string nextFieldName = GetFieldFullName(nextField);

					string callingConventionName = string.Empty;
					var attribute = FindAttributeByName(method.ContainingType, "System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute");
					if (attribute != null)
					{
						var callingConventionValue = (CallingConvention)attribute.ConstructorArguments[0].Value;
						callingConventionName = $"__{callingConventionValue.ToString().ToLower()} ";
					}

					string returnTypeName = GetTypeFullNameRef(method.ReturnType);
					if (!method.ReturnsVoid) writer.WriteLinePrefix(returnTypeName + " result;");
					writer.WritePrefix($"if (self->{selfFieldName} != 0) ");
					if (!method.ReturnsVoid) writer.Write("result = ");
					writer.Write($"(({returnTypeName} ({callingConventionName}*)({GetTypeFullName(specialTypes.objectType)}*");
					if (method.Parameters.Length != 0) writer.Write(", ");
					WriteParameterArgTypes();
					writer.Write($"))self->{funcFieldName})(self->{selfFieldName}");
					if (method.Parameters.Length != 0) writer.Write(", ");
					WriteParameterArgs();
					writer.WriteLine(");");

					writer.WritePrefix($"else ");
					if (!method.ReturnsVoid) writer.Write("result = ");
					writer.Write($"(({returnTypeName} ({callingConventionName}*)(");
					WriteParameterArgTypes();
					writer.Write($"))self->{funcFieldName})(");
					WriteParameterArgs();
					writer.WriteLine(");");

					writer.WritePrefix($"if (self->{nextFieldName} != 0) ");
					if (!method.ReturnsVoid) writer.Write("result = ");
					writer.Write($"{GetMethodFullName(method)}(self->{nextFieldName}");
					if (method.Parameters.Length != 0) writer.Write(", ");
					WriteParameterArgs();
					writer.WriteLine(");");
					if (!method.ReturnsVoid) writer.WriteLinePrefix("return result;");
				}
				else
				{
					throw new NotSupportedException("Unsupported implicit method kind: " + method.MethodKind);
				}

				if (method.MethodKind == MethodKind.Constructor && !IsInternalCall(method))
				{
					if (method.ContainingType.IsReferenceType) writer.WriteLinePrefix("return self;");
					else writer.WriteLinePrefix("return selfObj;");
				}
				writer.RemoveTab();
				writer.WriteLine('}');
			}

			return true;
		}

		private bool WriteDllImportMethodBind(IMethodSymbol method, out string methodName)
		{
			if (!GetDllImportName(method, out string dllName, out string name))
			{
				methodName = null;
				return false;
			}

			methodName = GetMethodFullName(method);
			if (options.api == API.Win32 || options.api == API.Win16)
			{
				if (dllName == "__Internal") writer.WriteLinePrefix($"{methodName} = GetProcAddress(GetModuleHandleW(NULL), \"{name}\");");
				else writer.WriteLinePrefix($"{methodName} = GetProcAddress(LoadLibraryW(L\"{dllName}\"), \"{name}\");");
			}
			else if (options.api == API.Posix)
			{
				if (dllName == "__Internal") writer.WriteLinePrefix($"{methodName} = dlsym(dlopen(NULL, RTLD_LAZY), \"{name}\");");
				else writer.WriteLinePrefix($"{methodName} = dlsym(dlopen(\"{dllName}\", RTLD_LAZY), \"{name}\");");
			}
			else if (options.api == API.MacOS_Classic)
			{
				throw new NotImplementedException("TODO: Classic MacOS DllImport");
			}
			else
			{
				throw new NotSupportedException("Unsupported API for DllImport method: " + options.api);
			}

			return true;
		}

		private void WriteContrustorFieldInitializers(IMethodSymbol method)
		{
			var members = method.ContainingType.GetMembers();
			foreach (var member in members)
			{
				if (member.IsImplicitlyDeclared) continue;
				if (!member.IsStatic && method.MethodKind != MethodKind.Constructor) continue;
				if (member.IsStatic && method.MethodKind != MethodKind.StaticConstructor) continue;

				if (member.Kind == SymbolKind.Field)
				{
					var field = (IFieldSymbol)member;
					if (field.IsConst) continue;

					var syntaxRef = field.DeclaringSyntaxReferences.FirstOrDefault();
					var syntax = (VariableDeclaratorSyntax)syntaxRef.GetSyntax();
					if (syntax.Initializer != null)
					{
						if (!field.IsStatic) writer.WritePrefix($"self->{GetFieldFullName(field)}");
						else writer.WritePrefix(GetFieldFullName(field));
						writer.Write(" = ");
						WriteExpression(syntax.Initializer.Value);
						writer.WriteLine(';');
					}
				}
			}
		}

		private bool IsParameterPassByRef(IParameterSymbol parameter)
		{
			switch (parameter.RefKind)
			{
				case RefKind.None:
				case RefKind.In:
					return false;

				case RefKind.Out:
				case RefKind.Ref:
					return true;

				default: throw new NotSupportedException("Parameter ref kind not supported: " + parameter.RefKind);
			}
		}

		private void WriteParameters(ImmutableArray<IParameterSymbol> parameters)
		{
			var lastParameter = parameters.LastOrDefault();
			foreach (var parameter in parameters)
			{
				if (parameter.IsOptional) throw new NotSupportedException("Optional parameters not supported: " + parameter);
				string ptr = string.Empty;
				if (IsParameterPassByRef(parameter)) ptr = "*";
				writer.Write($"{GetTypeFullNameRef(parameter.Type)}{ptr} {GetParameterFullName(parameter)}");
				if (lastParameter != null && !parameter.Equals(lastParameter)) writer.Write(", ");
			}
		}
	}
}
