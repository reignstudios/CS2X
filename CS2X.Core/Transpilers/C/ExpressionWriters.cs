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
using CS2X.Analyzer.SyntaxValidation;

namespace CS2X.Core.Transpilers.C
{
	public sealed partial class Transpiler_C
	{
		private void WriteExpression(ExpressionSyntax expression)
		{
			if (expression is LiteralExpressionSyntax) WriteLiteralExpression((LiteralExpressionSyntax)expression);
			else if (expression is IdentifierNameSyntax) WriteIdentifierName((IdentifierNameSyntax)expression);
			else if (expression is GenericNameSyntax) WriteGenericName((GenericNameSyntax)expression);
			else if (expression is MemberAccessExpressionSyntax) MemberAccessExpression((MemberAccessExpressionSyntax)expression);
			else if (expression is ObjectCreationExpressionSyntax) ObjectCreationExpression((ObjectCreationExpressionSyntax)expression);
			else if (expression is ArrayCreationExpressionSyntax) ArrayCreationExpression((ArrayCreationExpressionSyntax)expression);
			else if (expression is StackAllocArrayCreationExpressionSyntax) StackAllocArrayCreationExpression((StackAllocArrayCreationExpressionSyntax)expression);
			else if (expression is DeclarationExpressionSyntax) DeclarationExpression((DeclarationExpressionSyntax)expression);
			else if (expression is AssignmentExpressionSyntax) AssignmentExpression((AssignmentExpressionSyntax)expression);
			else if (expression is PrefixUnaryExpressionSyntax) PrefixUnaryExpression((PrefixUnaryExpressionSyntax)expression);
			else if (expression is PostfixUnaryExpressionSyntax) PostfixUnaryExpression((PostfixUnaryExpressionSyntax)expression);
			else if (expression is InvocationExpressionSyntax) InvocationExpression((InvocationExpressionSyntax)expression);
			else if (expression is ConditionalExpressionSyntax) ConditionalExpression((ConditionalExpressionSyntax)expression);
			else if (expression is BinaryExpressionSyntax) BinaryExpression((BinaryExpressionSyntax)expression);
			else if (expression is CastExpressionSyntax) CastExpression((CastExpressionSyntax)expression);
			else if (expression is ThisExpressionSyntax) ThisExpression((ThisExpressionSyntax)expression);
			else if (expression is BaseExpressionSyntax) BaseExpression((BaseExpressionSyntax)expression);
			else if (expression is ElementAccessExpressionSyntax) ElementAccessExpression((ElementAccessExpressionSyntax)expression);
			else if (expression is ParenthesizedExpressionSyntax) ParenthesizedExpression((ParenthesizedExpressionSyntax)expression);
			else if (expression is SizeOfExpressionSyntax) SizeOfExpression((SizeOfExpressionSyntax)expression);
			else if (expression is TypeOfExpressionSyntax) TypeOfExpression((TypeOfExpressionSyntax)expression);
			else if (expression is DefaultExpressionSyntax) DefaultExpression((DefaultExpressionSyntax)expression);
			else if (expression is CheckedExpressionSyntax) CheckedExpression((CheckedExpressionSyntax)expression);
			else if (expression is ThrowExpressionSyntax) ThrowExpression((ThrowExpressionSyntax)expression);
			else throw new NotImplementedException("Unsupported expression: " + expression.GetType());
		}

		private ExpressionSyntax GetCaller(ExpressionSyntax expression)
		{
			if (expression is MemberAccessExpressionSyntax)
			{
				var accessExpression = (MemberAccessExpressionSyntax)expression;
				expression = accessExpression.Expression;
			}
			else if
			(
				(expression is IdentifierNameSyntax || expression is GenericNameSyntax) &&
				expression.Parent is MemberAccessExpressionSyntax && ((MemberAccessExpressionSyntax)expression.Parent).Expression != expression
			)
			{
				return GetCaller((MemberAccessExpressionSyntax)expression.Parent);
			}
			else
			{
				var semanticModel = GetSemanticModel(expression);
				var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
				ITypeSymbol containingType = null;
				if (symbol.ContainingType != null) containingType = ResolveType(symbol.ContainingType);
				if
				(
					!symbol.IsStatic && containingType != null &&
					(IsOfType(method.ContainingType, containingType) ||
					(method.ContainingType.IsGenericType && !method.ContainingType.IsDefinition && IsOfType(method.ContainingType.ConstructedFrom, containingType)))
				)
				{
					expression = SyntaxFactory.ThisExpression();
				}
				else
				{
					throw new NotImplementedException("Failed to find caller for expression: " + expression.ToFullString());
				}
			}

			return expression;
		}

		private bool skipNextWriteCaller;
		private ExpressionSyntax WriteCaller(ExpressionSyntax expression)
		{
			var caller = GetCaller(expression);
			if (!skipNextWriteCaller) WriteExpression(caller);
			skipNextWriteCaller = false;
			return caller;
		}

		private ITypeSymbol GetCallerType(ExpressionSyntax callerExpression, ExpressionSyntax expression)
		{
			if (callerExpression is ThisExpressionSyntax)
			{
				var semanticModel = GetSemanticModel(expression);
				var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
				return symbol.ContainingType;
			}
			return ResolveType(callerExpression);
		}

		private void WriteCallerThisArgument(ExpressionSyntax callerExpression, ExpressionSyntax expression, IMethodSymbol method)
		{
			if (method.IsStatic) throw new Exception("Can't write caller for static method: " + method.Name);

			bool convertToIVALUE = false;
			var callerType = GetCallerType(callerExpression, expression);
			if (!callerType.IsValueType)
			{
				WriteExpression(callerExpression);
			}
			else if (!(callerExpression is IdentifierNameSyntax) && !(callerExpression is ThisExpressionSyntax))// check if caller needs to be converted to a IValue local
			{
				convertToIVALUE = true;
			}
			else
			{
				// check if caller needs to be converted to a IValue local
				if (!(callerExpression is ThisExpressionSyntax))
				{
					var semanticModel = GetSemanticModel(callerExpression);
					var symbol = semanticModel.GetSymbolInfo(callerExpression).Symbol;
					if (symbol.Kind == SymbolKind.Local)
					{
						var local = (ILocalSymbol)symbol;
						convertToIVALUE = local.IsConst;
					}
					else if (symbol.Kind == SymbolKind.Field)
					{
						var field = (IFieldSymbol)symbol;
						convertToIVALUE = field.IsConst;
					}
				}

				if (!convertToIVALUE)
				{
					// write non-constant
					if (!method.IsExtensionMethod) writer.Write('&');
					WriteExpression(callerExpression);
				}
			}

			// copy ivalue local to current block special locals
			if (convertToIVALUE)
			{
				string localName = TryAddStatementLocal(callerType, "IVALUE_", null);
				writer.Write($"CS2X_PValueToIValue_{GetTypeFullName(callerType)}(");
				WriteExpression(callerExpression);
				writer.Write($", &{localName})");
			}
		}

		private string TryAddStringLiteral(string literalValue)
		{
			string literalName;
			if (!stringLiterals.ContainsKey(literalValue))
			{
				literalName = "StringLiteral_" + stringLiterals.Count.ToString();
				stringLiterals.Add(literalValue, literalName);
			}
			else
			{
				literalName = stringLiterals[literalValue];
			}
			return literalName;
		}

		private void WriteLiteralExpression(LiteralExpressionSyntax expression)
		{
			if (expression.IsKind(SyntaxKind.StringLiteralExpression))
			{
				string literalName = TryAddStringLiteral(expression.Token.ValueText);
				writer.Write(literalName);
			}
			else if (expression.IsKind(SyntaxKind.NullLiteralExpression))
			{
				writer.Write('0');
			}
			else if (expression.IsKind(SyntaxKind.NumericLiteralExpression))
			{
				writer.Write(GetFormatedConstValue(expression.Token.Value));
			}
			else if (expression.IsKind(SyntaxKind.CharacterLiteralExpression))
			{
				string value = expression.Token.ValueText;
				if (value.Length != 1) throw new Exception("char literal length != 1: " + value);
				writer.Write(CharToLiteral(value[0]));
			}
			else if (expression.IsKind(SyntaxKind.TrueLiteralExpression))
			{
				writer.Write('1');
			}
			else if (expression.IsKind(SyntaxKind.FalseLiteralExpression))
			{
				writer.Write('0');
			}
			else if (expression.IsKind(SyntaxKind.DefaultLiteralExpression))
			{
				var type = ResolveType(expression);
				WriteDefaultValue(type, expression);
			}
			else
			{
				throw new NotSupportedException("LiteralExpressionSyntax not supported: " + expression.Kind());
			}
		}

		private void WriteDefaultValue(ITypeSymbol type, ExpressionSyntax expression)
		{
			if (IsPrimitiveType(type) || type.IsReferenceType)
			{
				writer.Write('0');
			}
			else
			{
				var defaultConstructor = FindDefaultConstructor(type);
				WriteMethodInvoke(defaultConstructor, expression);
				writer.Write("()");
			}
		}

		private void WriteMethodInvoke(IMethodSymbol method, ExpressionSyntax expression)
		{
			method = ResolveMethod(method, this.method);
			if (IsVirtualMethod(method) && !(method.IsOverride && method.ContainingType.IsSealed))
			{
				var caller = GetCaller(expression);
				if (caller is TypeOfExpressionSyntax)
				{
					WriteCaller(expression);
					writer.Write("->");
				}
				else if (caller is BaseExpressionSyntax)
				{
					writer.Write(GetMethodFullName(method));
					return;
				}
				else
				{
					writer.Write($"(({GetRuntimeTypeFullName(method.ContainingType)}*)");
					WriteCaller(expression);
					writer.Write("->CS2X_RuntimeType)->");
				}
				writer.Write(GetVTableMethodFullName(method));
			}
			else
			{
				writer.Write(GetMethodFullName(method));
			}
		}

		private void WriteIdentifierName(IdentifierNameSyntax expression)
		{
			// check if identifier needs implicit conversion
			bool requiredConversion = false;
			var semanticModel = GetSemanticModel(expression);
			var conversion = semanticModel.GetConversion(expression);
			if (conversion != null && conversion.IsImplicit && conversion.IsUserDefined)
			{
				var method = ResolveMethod(conversion.MethodSymbol, this.method);
				if (method != null && !method.IsExtern)
				{
					requiredConversion = true;
					writer.Write(GetMethodFullName(method));
					writer.Write('(');
				}
			}

			// process normal identifier symbol
			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
			if (symbol.Kind == SymbolKind.Local)
			{
				var local = (ILocalSymbol)symbol;
				if (local.IsConst)
				{
					writer.Write(GetFormatedConstValue(local.ConstantValue));
				}
				else
				{
					var type = ResolveType(local.Type);
					var localObj = instructionalBody.locals.First(x => x.Equals(expression.Identifier.ValueText, type));
					writer.Write(localObj.name);
				}
			}
			else if (symbol.Kind == SymbolKind.Parameter)
			{
				var parameter = (IParameterSymbol)symbol;
				if (!IsParameterPassByRef(parameter)) writer.Write(GetParameterFullName(parameter));
				else writer.Write($"(*{GetParameterFullName(parameter)})");
			}
			else if (symbol.Kind == SymbolKind.Field)
			{
				var field = (IFieldSymbol)symbol;
				if (field.IsConst)
				{
					writer.Write(GetFormatedConstValue(field.ConstantValue));
				}
				else if (!field.IsStatic)
				{
					var caller = WriteCaller(expression);
					var type = GetCallerType(caller, expression);
					if (type.IsReferenceType) writer.Write("->");
					else writer.Write('.');
					writer.Write(GetFieldFullName(field));
				}
				else
				{
					writer.Write(GetFieldFullName(field));
				}
			}
			else if (symbol.Kind == SymbolKind.Property)
			{
				var property = (IPropertySymbol)symbol;
				if (IsAutoProperty(property, out var field))
				{
					if (!property.IsStatic)
					{
						var caller = WriteCaller(expression);
						var type = GetCallerType(caller, expression);
						if (type.IsReferenceType) writer.Write("->");
						else writer.Write('.');
						writer.Write(GetFieldFullName(field));
					}
					else
					{
						writer.Write(GetFieldFullName(field));
					}
				}
				else
				{
					var getMethod = ResolveMethod(property.GetMethod, method);
					if (!property.IsStatic)
					{
						WriteMethodInvoke(getMethod, expression);
						writer.Write('(');
						var caller = GetCaller(expression);
						WriteCallerThisArgument(caller, expression, getMethod);
						writer.Write(')');
					}
					else
					{
						writer.Write($"{GetMethodFullName(getMethod)}()");
					}
				}
			}
			else if (symbol.Kind == SymbolKind.Method)
			{
				var method = (IMethodSymbol)symbol;
				WriteDelegateCreationOrMethodInvoke(expression, method);
			}
			else if (symbol.Kind == SymbolKind.Discard)
			{
				var discard = (IDiscardSymbol)symbol;
				if (discard.NullableAnnotation == NullableAnnotation.Annotated) throw new NotSupportedException("Nullable annotation not supported for discard: " + discard);
				string local = TryAddStatementLocal(discard.Type, "DISCARD_", null);
				writer.Write(local);
			}
			else
			{
				throw new NotSupportedException("IdentifierNameSyntax Symbol not supported: " + symbol.GetType());
			}

			// close conversion method
			if (requiredConversion) writer.Write(')');
		}

		private void WriteGenericName(GenericNameSyntax expression)
		{
			var semanticModel = GetSemanticModel(expression);
			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
			if (symbol is IMethodSymbol method) WriteDelegateCreationOrMethodInvoke(expression, method);
			else if (symbol != null) throw new NotSupportedException("Unsupported GenericNameSyntax: " + symbol.FullName());
			else throw new NotSupportedException("Unsupported GenericNameSyntax");
		}

		private void WriteDelegateCreationOrMethodInvoke(ExpressionSyntax expression, IMethodSymbol method)
		{
			var semanticModel = GetSemanticModel(expression);
			var operation = semanticModel.GetOperation(expression);
			if (operation == null && expression.Parent != null)
			{
				semanticModel = GetSemanticModel(expression.Parent);
				operation = semanticModel.GetOperation(expression.Parent);
			}
			if (operation != null && operation.Kind == OperationKind.MethodReference)
			{
				if (operation.Parent != null)
				{
					if (operation.Parent.Kind != OperationKind.DelegateCreation) throw new NotSupportedException("MethodReference operation has unsupported parent kind: " + operation.Parent.Kind);
				}
				else
				{
					throw new NotSupportedException("MethodReference operation has null parent");
				}

				var type = operation.Parent.Type;
				var voidType = solution.coreLibProject.compilation.GetSpecialType(SpecialType.System_Void);
				var intptrType = solution.coreLibProject.compilation.GetSpecialType(SpecialType.System_IntPtr);
				var constructorMethod = ResolveMethod(FindMethodBySignature(type, ".ctor", voidType, specialTypes.objectType, intptrType), this.method);
				writer.Write($"{GetMethodFullName(constructorMethod)}({GetNewObjectMethod(type)}(sizeof({GetTypeFullName(type)}), &{GetRuntimeTypeObjFullName(type)}, 0), ");
				if (!IsVirtualMethod(method))
				{
					if (!method.IsStatic) WriteCaller(expression);
					else writer.Write("0");
					writer.Write($", &{GetMethodFullName(method)})");
				}
				else
				{
					if (method.IsStatic) throw new NotSupportedException("Binding to a static virtual method is not supported: " + method.Name);
					var methodType = ResolveType(method.ContainingType);
					writer.Write($"DELEGATE_OBJ, (({GetRuntimeTypeFullName(methodType)}*)DELEGATE_OBJ->CS2X_RuntimeType)->{GetVTableMethodFullName(method)})");
				}
			}
			else
			{
				WriteMethodInvoke(method, expression);
			}
		}

		private void WriteArgumentList(IMethodSymbol method, ArgumentListSyntax argumentList)
		{
			// normal parameters
			var arguments = argumentList.Arguments;
			if (arguments.Count != 0)
			{
				var lastArg = arguments.LastOrDefault();
				int gcStackLocalCount = 0;// to help give each param in a method a unique name for non-local ref/out
				for (int i = 0; i != arguments.Count; ++i)
				{
					var arg = arguments[i];
					if (arg.RefKindKeyword.Text == "out" || arg.RefKindKeyword.Text == "ref")
					{
						writer.Write('&');
						// check if expression needs to store non-local on stack to prevent potential GC collection
						if (options.refNonLocalGCParamsOnStack && NotReferenceableOnStack(method, arg.Expression, out var expression, out var memberAccessExpression))
						{
							var argType = ResolveType(expression);
							string localName = TryAddStatementLocal(argType, "GCREF_", '_' + gcStackLocalCount.ToString());
							++gcStackLocalCount;
							writer.Write($"(({GetTypeFullNameRef(argType)})CS2X_RefObjOnStack(&{localName}, ");
							WriteExpression(expression);
							writer.Write("))");
							if (memberAccessExpression != null)
							{
								skipNextWriteCaller = true;
								WriteExpression(memberAccessExpression);
							}
						}
						else
						{
							WriteExpression(arg.Expression);
						}
					}
					else
					{
						// check method parameter for special string literal expression
						if (GetNativeStringParamAttribute(method.Parameters[i], out var attribute))
						{
							if (!(arg.Expression is LiteralExpressionSyntax literal) || !literal.IsKind(SyntaxKind.StringLiteralExpression)) throw new NotSupportedException("NativeStringType must be string literal");
							var value = attribute.ConstructorArguments[0];
							var valueEnum = (NativeStringType)value.Value;
							if (valueEnum == NativeStringType.Char) writer.Write($"\"{literal.Token.ValueText}\"");
							else if (valueEnum == NativeStringType.WideChar) writer.Write($"L\"{literal.Token.ValueText}\"");
							else throw new NotSupportedException("Unsupported NativeStringType: " + valueEnum);
						}
						else
						{
							WriteExpression(arg.Expression);
						}
					}

					if (lastArg != null && arg != lastArg) writer.Write(", ");
				}
			}

			// optional parameters
			if (argumentList.Arguments.Count != method.Parameters.Length)
			{
				throw new NotSupportedException("Argument count != method parameter count. (Optional parameters not supported)");
			}
		}

		private void MemberAccessExpression(MemberAccessExpressionSyntax expression)
		{
			// expression.Expression is the caller and will be writen from the WriteCaller method
			var semanticModel = GetSemanticModel(expression.Name);
			var nameSymbol = semanticModel.GetSymbolInfo(expression.Name).Symbol;
			if (nameSymbol == null || expression.ToString().Contains("HINSTANCE.Zero"))// TEST
			{
				var diagnostics = semanticModel.GetDiagnostics();
			}
			if
			(
				nameSymbol is IMethodSymbol ||
				nameSymbol is IPropertySymbol ||
				nameSymbol is IFieldSymbol
			)
			{
				WriteExpression(expression.Name);
			}
			else
			{
				throw new NotSupportedException("Unsupported MemberAccessExpression: " + expression.ToString());
			}
		}

		private void ObjectCreationExpression(ObjectCreationExpressionSyntax expression)
		{
			var semanticModel = GetSemanticModel(expression);
			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;

			// grab method symbol
			IMethodSymbol method;
			bool isDelegateCreation = false;
			if (symbol == null)
			{
				var operation = semanticModel.GetOperation(expression);
				if (operation == null) throw new Exception("Failed to get operation for object creation");
				if (operation.Kind != OperationKind.DelegateCreation) throw new NotSupportedException("Unsupported object creation kind: " + operation.Kind);
				var type = operation.Type;
				var voidType = solution.coreLibProject.compilation.GetSpecialType(SpecialType.System_Void);
				var intptrType = solution.coreLibProject.compilation.GetSpecialType(SpecialType.System_IntPtr);
				method = FindMethodBySignature(type, ".ctor", voidType, specialTypes.objectType, intptrType);
				isDelegateCreation = true;
			}
			else
			{
				method = (IMethodSymbol)symbol;
			}

			// resolve method
			method = ResolveMethod(method, this.method);

			// write constructor and allocator
			writer.Write(GetMethodFullName(method));
			writer.Write('(');
			if (method.ContainingType.IsReferenceType)
			{
				string finalizerMethod = "0";
				if (FindDestructor(method.ContainingType, out var destructorMethod)) finalizerMethod = '&' + GetMethodFullName(destructorMethod);
				writer.Write($"{GetNewObjectMethod(method.ContainingType)}(sizeof({GetTypeFullName(method.ContainingType)}), &{GetRuntimeTypeObjFullName(method.ContainingType)}, {finalizerMethod})");
				if (expression.ArgumentList.Arguments.Count != 0) writer.Write(", ");
			}

			// write custom/special arguments
			if (!isDelegateCreation)
			{
				WriteArgumentList(method, expression.ArgumentList);
			}
			else
			{
				var arg = expression.ArgumentList.Arguments[0];
				var argSemanticModel = GetSemanticModel(arg.Expression);
				var argMethod = ResolveMethod((IMethodSymbol)argSemanticModel.GetSymbolInfo(arg.Expression).Symbol, this.method);
				if (!argMethod.IsStatic) WriteCaller(arg.Expression);
				else writer.Write("0");
				writer.Write($", &{GetMethodFullName(argMethod)}");
			}
			writer.Write(')');

			// write initializer
			if (expression.Initializer != null)
			{
				writer.WriteLine(';');
				ExpressionSyntax caller = null;
				InstructionalBody.Local local = null;
				ITypeSymbol type;
				if (expression.Parent is AssignmentExpressionSyntax)
				{
					var parent = (AssignmentExpressionSyntax)expression.Parent;
					caller = parent.Left;
					type = ResolveType(parent.Left);
				}
				else if (expression.Parent is EqualsValueClauseSyntax && expression.Parent.Parent is VariableDeclaratorSyntax)
				{
					var parent = (VariableDeclaratorSyntax)expression.Parent.Parent;
					local = instructionalBody.locals.Find(x => x.identifier == parent.Identifier.ValueText);
					type = local.type;
				}
				else
				{
					throw new NotSupportedException("Unsupported object creation initializer: " + expression.ToFullString());
				}

				var last = expression.Initializer.Expressions.LastOrDefault();
				foreach (AssignmentExpressionSyntax e in expression.Initializer.Expressions)
				{
					writer.WritePrefix();
					if (local == null) WriteExpression(caller);
					else writer.Write(local.name);

					var leftSemanticModel = GetSemanticModel(e.Left);
					var field = (IFieldSymbol)leftSemanticModel.GetSymbolInfo(e.Left).Symbol;
					if (type.IsReferenceType) writer.Write("->");
					else writer.Write('.');
					writer.Write(GetFieldFullName(field));

					writer.Write(" = ");
					WriteExpression(e.Right);
					if (e != last) writer.WriteLine(';');
				}
			}
		}

		private void ArrayCreationExpression(ArrayCreationExpressionSyntax expression)
		{
			var arrayType = expression.Type;
			var type = ResolveType(arrayType);
			var elementType = ResolveType(arrayType.ElementType);
			foreach (var rank in arrayType.RankSpecifiers)
			{
				if (rank.Sizes.Count != 1) throw new NotSupportedException("Array creation only supports single rank size");
			}
			writer.Write($"{GetNewArrayMethod(elementType)}(sizeof({GetTypeFullName(elementType)}), ");
			if (arrayType.RankSpecifiers[0].Sizes[0] is OmittedArraySizeExpressionSyntax)
			{
				if (expression.Initializer == null) throw new NotSupportedException("Ommitted array size with no initializer not supported");
				writer.Write(expression.Initializer.Expressions.Count.ToString());
			}
			else
			{
				WriteExpression(arrayType.RankSpecifiers[0].Sizes[0]);// grab first rank size
			}
			writer.Write($", &{GetRuntimeTypeObjFullName(type)})");

			// write initializer
			if (expression.Initializer != null)
			{
				writer.WriteLine(';');
				ExpressionSyntax caller = null;
				InstructionalBody.Local local = null;
				if (expression.Parent is AssignmentExpressionSyntax)
				{
					var parent = (AssignmentExpressionSyntax)expression.Parent;
					caller = parent.Left;
				}
				else if (expression.Parent is EqualsValueClauseSyntax && expression.Parent.Parent is VariableDeclaratorSyntax)
				{
					var parent = (VariableDeclaratorSyntax)expression.Parent.Parent;
					local = instructionalBody.locals.Find(x => x.identifier == parent.Identifier.ValueText);
				}
				else
				{
					throw new NotSupportedException("Unsupported array creation initializer: " + expression.ToFullString());
				}

				void writeExpression()
				{
					if (local == null) WriteExpression(caller);
					else writer.Write(local.name);
				}

				var last = expression.Initializer.Expressions.LastOrDefault();
				int i = 0;
				foreach (ExpressionSyntax e in expression.Initializer.Expressions)
				{
					writer.WritePrefix();
					WriteArrayElementAccessOffset(writeExpression, type);
					writer.Write($"[{i}] = ");
					WriteExpression(e);
					if (e != last) writer.WriteLine(';');
					++i;
				}
			}
		}

		private void StackAllocArrayCreationExpression(StackAllocArrayCreationExpressionSyntax expression)
		{
			if (!(expression.Type is ArrayTypeSyntax)) throw new NotSupportedException("stackalloc only supports array types");
			var arrayType = (ArrayTypeSyntax)expression.Type;
			var type = ResolveType(expression.Type);
			if (!(type is IPointerTypeSymbol)) throw new NotImplementedException("stackalloc is not pointer type");
			var ptrType = (IPointerTypeSymbol)type;
			if (arrayType.RankSpecifiers.Count != 1) throw new NotSupportedException("stackalloc only supports single rank");
			if (arrayType.RankSpecifiers[0].Sizes.Count != 1) throw new NotSupportedException("stackalloc only supports single rank size");
			writer.Write($"alloca(sizeof({GetTypeFullNameRef(ptrType.PointedAtType)}) * (");
			WriteExpression(arrayType.RankSpecifiers[0].Sizes[0]);// fixed arrays should always support this form
			writer.Write("))");

			// write initializer
			if (expression.Initializer != null)
			{
				writer.WriteLine(';');
				IdentifierNameSyntax caller = null;
				InstructionalBody.Local local = null;
				if (expression.Parent is AssignmentExpressionSyntax)
				{
					var parent = (AssignmentExpressionSyntax)expression.Parent;
					caller = (IdentifierNameSyntax)parent.Left;
				}
				else if (expression.Parent is EqualsValueClauseSyntax && expression.Parent.Parent is VariableDeclaratorSyntax)
				{
					var parent = (VariableDeclaratorSyntax)expression.Parent.Parent;
					local = instructionalBody.locals.Find(x => x.identifier == parent.Identifier.ValueText);
				}
				else
				{
					throw new NotSupportedException("Unsupported stackalloc initializer: " + expression.ToFullString());
				}

				var last = expression.Initializer.Expressions.LastOrDefault();
				int i = 0;
				foreach (ExpressionSyntax e in expression.Initializer.Expressions)
				{
					writer.WritePrefix();
					if (local == null) WriteExpression(caller);
					else writer.Write(local.name);
					writer.Write($"[{i}] = ");
					WriteExpression(e);
					if (e != last) writer.WriteLine(';');
					++i;
				}
			}
		}

		private void DeclarationExpression(DeclarationExpressionSyntax expression)
		{
			var type = ResolveType(expression);
			var designation = expression.Designation as SingleVariableDesignationSyntax;
			if (designation == null) throw new NotSupportedException("DeclarationExpressionSyntax.Designation must be SingleVariableDesignationSyntax");
			var local = TryAddLocal(designation.Identifier.ValueText, type);
			writer.Write(local.name);
		}

		private void AssignmentExpression(AssignmentExpressionSyntax expression)
		{
			// check if special property assignment is needed
			if (expression.Left is IdentifierNameSyntax || expression.Left is MemberAccessExpressionSyntax)
			{
				var leftSemanticModel = GetSemanticModel(expression.Left);
				var property = leftSemanticModel.GetSymbolInfo(expression.Left).Symbol as IPropertySymbol;
				if (property != null && !IsAutoProperty(property))
				{
					var setMethod = ResolveMethod(property.SetMethod, method);
					writer.Write(GetMethodFullName(setMethod));
					writer.Write('(');
					if (!property.IsStatic)
					{
						WriteCaller(expression.Left);
						writer.Write(", ");
					}
					WriteExpression(expression.Right);
					writer.Write(')');
					return;
				}
			}

			// check if special property element assignment will be used
			if (expression.Left is ElementAccessExpressionSyntax)
			{
				var leftSemanticModel = GetSemanticModel(expression.Left);
				var property = leftSemanticModel.GetSymbolInfo(expression.Left).Symbol as IPropertySymbol;
				if (property != null && property.IsIndexer)
				{
					var elementAccessExpression = (ElementAccessExpressionSyntax)expression.Left;

					// get index expression
					var arguments = elementAccessExpression.ArgumentList.Arguments;
					if (arguments.Count != 1) throw new NotSupportedException("Elements can only have one arg");
					var indexExpression = arguments[0].Expression;

					// write method invoke
					var setMethod = ResolveMethod(property.SetMethod, method);
					writer.Write(GetMethodFullName(setMethod));
					writer.Write('(');
					WriteExpression(elementAccessExpression.Expression);
					writer.Write(", ");
					WriteExpression(indexExpression);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
					return;
				}
			}

			// check if we should invoke custom operator method
			var semanticModel = GetSemanticModel(expression);
			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
			if (symbol != null && symbol.Kind == SymbolKind.Method && !symbol.IsExtern && expression.OperatorToken.ValueText.Length == 2)
			{
				var method = ResolveMethod((IMethodSymbol)symbol, this.method);
				if (!method.IsImplicitlyDeclared)
				{
					WriteExpression(expression.Left);
					writer.Write(" = ");
					writer.Write(GetMethodFullName(method));
					writer.Write('(');
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
					return;
				}
				else if (method.MethodKind == MethodKind.BuiltinOperator && method.ContainingType != null && specialTypes.multicastDelegateType.IsEqual(method.ContainingType.BaseType))
				{
					if (expression.OperatorToken.ValueText == "+=") method = FindMethodByName(specialTypes.delegateType, "Combine");
					else if (expression.OperatorToken.ValueText == "-=") method = FindMethodByName(specialTypes.delegateType, "Remove");
					else throw new NotSupportedException("Unsupported assignment method for delegate: " + method.FullName());

					bool isBindingToVirtualMethod = false;
					var rightSemanticModel = GetSemanticModel(expression.Right);
					var rightSymbol = rightSemanticModel.GetSymbolInfo(expression.Right).Symbol;
					if (rightSymbol is IMethodSymbol rightMethod && IsVirtualMethod(rightMethod))
					{
						isBindingToVirtualMethod = true;
						writer.WriteLine('{');
						writer.AddTab();
						var rightCaller = GetCaller(expression.Right);
						var rightCallerType = ResolveType(rightCaller);
						writer.WriteLinePrefix(GetTypeFullNameRef(rightCallerType) + " DELEGATE_OBJ;");
						writer.WritePrefix("DELEGATE_OBJ = ");
						WriteExpression(rightCaller);
						writer.WriteLine(';');
						writer.WritePrefix();
					}
					WriteExpression(expression.Left);
					writer.Write(" = ");
					writer.Write(GetMethodFullName(method));
					writer.Write('(');
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
					if (isBindingToVirtualMethod)
					{
						isBindingToVirtualMethod = true;
						writer.WriteLine(';');
						writer.RemoveTab();
						writer.WritePrefix('}');
					}
					return;
				}
			}

			// normal assignment
			WriteExpression(expression.Left);
			writer.Write($" {expression.OperatorToken.ValueText} ");
			WriteExpression(expression.Right);
		}

		private void PrefixUnaryExpression(PrefixUnaryExpressionSyntax expression)
		{
			if (expression.OperatorToken.Text == "-")
			{
				var semanticModel = GetSemanticModel(expression);
				var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
				if (symbol != null && symbol is IMethodSymbol)
				{
					var method = ResolveMethod((IMethodSymbol)symbol, this.method);
					if (method.MethodKind != MethodKind.BuiltinOperator)
					{
						if (!method.IsStatic || method.MethodKind != MethodKind.UserDefinedOperator) throw new NotSupportedException("Unsupported prefix unary method: " + method.FullName());
						writer.Write(GetMethodFullName(method));
						writer.Write('(');
						WriteExpression(expression.Operand);
						writer.Write(')');
						return;
					}
				}
			}
			writer.Write(expression.OperatorToken.Text);
			WriteExpression(expression.Operand);
		}

		private void PostfixUnaryExpression(PostfixUnaryExpressionSyntax expression)
		{
			WriteExpression(expression.Operand);
			writer.Write(expression.OperatorToken.Text);
		}

		private void InvocationExpression(InvocationExpressionSyntax expression)
		{
			var semanticModel = GetSemanticModel(expression);
			var symbolInfo = semanticModel.GetSymbolInfo(expression);
			var method = ResolveMethod((IMethodSymbol)symbolInfo.Symbol, this.method);
			bool isStaticExternCMethod = false;
			ITypeSymbol callerType = null;

			// write delegate invoke
			if (method.MethodKind == MethodKind.DelegateInvoke)
			{
				writer.Write(GetMethodFullName(method));
				writer.Write('(');
				if (expression.Expression is MemberAccessExpressionSyntax memberExpression)
				{
					var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
					if (symbol.Kind == SymbolKind.Method) WriteExpression(memberExpression.Expression);
					else throw new NotSupportedException("Unsupported delgate invoke expression: " + expression.ToFullString());
				}
				else
				{
					WriteExpression(expression.Expression);
				}

				if (expression.ArgumentList.Arguments.Count != 0)
				{
					writer.Write(", ");
					WriteArgumentList(method, expression.ArgumentList);
				}
				writer.Write(')');
				return;
			}

			// get non-static caller
			ExpressionSyntax caller = null;
			if (!method.IsStatic)
			{
				caller = GetCaller(expression.Expression);
				if (caller is ThisExpressionSyntax) callerType = method.ContainingType;
				else callerType = ResolveType(caller);

				if (callerType.TypeKind == TypeKind.Enum && !method.IsExtensionMethod)
				{
					if (method.Name == "ToString")
					{
						string enumToStringMethodName;
						if (!enumToStringMethods.ContainsKey(callerType))
						{
							// add special enum ToString method
							enumToStringMethodName = GetTypeFullName(callerType) + "_ToString";
							enumToStringMethods.Add(callerType, enumToStringMethodName);

							// add string literals for each enum field
							foreach (var member in callerType.GetMembers())
							{
								if (member.Kind != SymbolKind.Field) continue;
								var field = (IFieldSymbol)member;
								TryAddStringLiteral(field.Name);
							}
						}
						else
						{
							// get existing ToString enum method
							enumToStringMethodName = enumToStringMethods[callerType];
						}

						// write special enum ToString method instead of base one
						writer.Write($"{enumToStringMethodName}(");
						WriteExpression(caller);
						writer.Write(')');
						return;
					}
					else
					{
						throw new NotSupportedException("Non extension Enum method not supported: " + expression.ToFullString());
					}
				}
				if (callerType.IsValueType)
				{
					if (method.ContainingType.IsEqual(specialTypes.objectType)) throw new NotSupportedException("ValueType boxing invoke not supported: " + expression.ToFullString());
					if (IsVirtualMethod(method)) throw new NotSupportedException("ValueType virtual invoke not supported: " + expression.ToFullString());
				}
			}
			else if (method.IsExtern)// write static extern method name
			{
				if (GetNativeExternName(method, NativeTarget.C, out string name))
				{
					isStaticExternCMethod = true;
					writer.Write(name);
				}
				else if (GetDllImportName(method, out _, out _))
				{
					isStaticExternCMethod = true;
					writer.Write($"(*{GetMethodFullName(method)})");
				}
			}

			// write method name
			if (!isStaticExternCMethod)
			{
				if (IsVirtualMethod(method) && callerType.IsValueType) throw new NotSupportedException($"Virtual methods cannot be used on structs: {callerType.FullName()}->{method.FullName()}");
				WriteExpression(expression.Expression);
			}

			// write method arguments
			writer.Write('(');
			if (!method.IsStatic)
			{
				WriteCallerThisArgument(caller, expression.Expression, method);
				if (expression.ArgumentList.Arguments.Count != 0) writer.Write(", ");
			}
			WriteArgumentList(method, expression.ArgumentList);
			writer.Write(')');
		}

		private void ConditionalExpression(ConditionalExpressionSyntax expression)
		{
			WriteExpression(expression.Condition);
			writer.Write(" ? ");
			WriteExpression(expression.WhenTrue);
			writer.Write(" : ");
			WriteExpression(expression.WhenFalse);
		}

		private void BinaryExpression(BinaryExpressionSyntax expression)
		{
			// check if binary expression can be resolved to single string literal
			// optimization to avoid needless string concatenations / GC allocations or arithmetic
			var semanticModel = GetSemanticModel(expression);
			var constantValue = semanticModel.GetConstantValue(expression).Value;
			if (constantValue != null)
			{
				var constType = constantValue.GetType();
				if (constType == typeof(string) || IsNumericType(constType))
				{
					writer.Write(GetFormatedConstValue(constantValue));
					return;
				}
			}

			// write standard binary operations
			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
			if (symbol == null)
			{
				WriteExpression(expression.Left);
				writer.Write($" {expression.OperatorToken.ValueText} ");
				WriteExpression(expression.Right);
			}
			else if (symbol is IMethodSymbol)
			{
				var operatorMethod = ResolveMethod((IMethodSymbol)symbol, method);
				var type = operatorMethod.ContainingType;
				if (type != null && type.SpecialType == SpecialType.System_String)
				{
					IMethodSymbol specialMethod = null;
					if
					(
						expression.OperatorToken.ValueText == "+" &&
						operatorMethod.ReturnType.SpecialType == SpecialType.System_String &&
						operatorMethod.Parameters.Length == 2 &&
						operatorMethod.Parameters[0].Type.SpecialType == SpecialType.System_String &&
						operatorMethod.Parameters[1].Type.SpecialType == SpecialType.System_String
					)
					{
						specialMethod = (IMethodSymbol)type.GetMembers().First(x => x is IMethodSymbol && x.Name == "Concat" && ((IMethodSymbol)x).Parameters.Length == 2);
					}
					if
					(
						expression.OperatorToken.ValueText == "+" &&
						operatorMethod.ReturnType.SpecialType == SpecialType.System_String &&
						operatorMethod.Parameters.Length == 2 &&
						((operatorMethod.Parameters[0].Type.SpecialType == SpecialType.System_String &&
						operatorMethod.Parameters[1].Type.SpecialType == SpecialType.System_Object) ||
						(operatorMethod.Parameters[0].Type.SpecialType == SpecialType.System_Object &&
						operatorMethod.Parameters[1].Type.SpecialType == SpecialType.System_String))
					)
					{
						ITypeSymbol objType;
						if (operatorMethod.Parameters[1].Type.SpecialType == SpecialType.System_Object)
						{
							var semanticModelRight = GetSemanticModel(expression.Right);
							objType = semanticModelRight.GetTypeInfo(expression.Right).Type;
							specialMethod = FindMethodBySignature(specialTypes.stringType, "op_Addition", specialTypes.stringType, specialTypes.stringType, specialTypes.charType);
						}
						else
						{
							var semanticModelLeft = GetSemanticModel(expression.Left);
							objType = semanticModelLeft.GetTypeInfo(expression.Left).Type;
							specialMethod = FindMethodBySignature(specialTypes.stringType, "op_Addition", specialTypes.stringType, specialTypes.charType, specialTypes.stringType);
						}
						if (objType.SpecialType != SpecialType.System_Char) throw new NotSupportedException("Unsupported concat expression: " + expression.ToFullString());
					}
					else if
					(
						expression.OperatorToken.ValueText == "==" &&
						operatorMethod.ReturnType.SpecialType == SpecialType.System_Boolean &&
						operatorMethod.Parameters.Length == 2 &&
						operatorMethod.Parameters[0].Type.SpecialType == SpecialType.System_String &&
						operatorMethod.Parameters[1].Type.SpecialType == SpecialType.System_String
					)
					{
						if (expression.Right.IsKind(SyntaxKind.NullLiteralExpression))
						{
							WriteExpression(expression.Left);
							writer.Write($" {expression.OperatorToken.ValueText} ");
							WriteExpression(expression.Right);
							return;
						}
						specialMethod = (IMethodSymbol)type.GetMembers().First(x => x is IMethodSymbol && x.Name == "Equals" && ((IMethodSymbol)x).Parameters.Length == 1 && ((IMethodSymbol)x).Parameters[0].Type.SpecialType == SpecialType.System_String);
					}

					if (specialMethod != null)
					{
						specialMethod = ResolveMethod(specialMethod, method);
						writer.Write(GetMethodFullName(specialMethod));
					}
					else
					{
						writer.Write(GetMethodFullName(operatorMethod));
					}
					writer.Write('(');
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
				}
				else if (expression.OperatorToken.ValueText == "%" && operatorMethod.MethodKind == MethodKind.BuiltinOperator && type != null && type.SpecialType == SpecialType.System_Single)
				{
					writer.Write("fmodf(");
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
				}
				else if (expression.OperatorToken.ValueText == "%" && operatorMethod.MethodKind == MethodKind.BuiltinOperator && type != null && type.SpecialType == SpecialType.System_Double)
				{
					writer.Write("fmod(");
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
				}
				else if (operatorMethod.MethodKind == MethodKind.BuiltinOperator && type != null && type.BaseType != null && type.BaseType.SpecialType == SpecialType.System_MulticastDelegate)
				{
					IMethodSymbol specialMethod = null;
					if
					(
						expression.OperatorToken.ValueText == "+" &&
						operatorMethod.ReturnType.IsEqual(type) &&
						operatorMethod.Parameters.Length == 2 &&
						operatorMethod.Parameters[0].Type.IsEqual(type) &&
						operatorMethod.Parameters[1].Type.IsEqual(type)
					)
					{
						var delegateType = type.BaseType.BaseType;
						specialMethod = (IMethodSymbol)delegateType.GetMembers().First(x => x is IMethodSymbol && x.Name == "Combine" && ((IMethodSymbol)x).Parameters.Length == 2);
					}
					else if
					(
						expression.OperatorToken.ValueText == "-" &&
						operatorMethod.ReturnType.IsEqual(type) &&
						operatorMethod.Parameters.Length == 2 &&
						operatorMethod.Parameters[0].Type.IsEqual(type) &&
						operatorMethod.Parameters[1].Type.IsEqual(type)
					)
					{
						var delegateType = type.BaseType.BaseType;
						specialMethod = (IMethodSymbol)delegateType.GetMembers().First(x => x is IMethodSymbol && x.Name == "Remove" && ((IMethodSymbol)x).Parameters.Length == 2);
					}

					if (specialMethod != null)
					{
						specialMethod = ResolveMethod(specialMethod, method);
						writer.Write(GetMethodFullName(specialMethod));
						writer.Write('(');
						WriteExpression(expression.Left);
						writer.Write(", ");
						WriteExpression(expression.Right);
						writer.Write(')');
					}
					else
					{
						WriteExpression(expression.Left);
						writer.Write($" {expression.OperatorToken.ValueText} ");
						WriteExpression(expression.Right);
					}
				}
				else if
				(
					((IsPrimitiveType(operatorMethod.Parameters[0].Type) || operatorMethod.Parameters[0].Type is IPointerTypeSymbol) &&
					(IsPrimitiveType(operatorMethod.Parameters[1].Type) || operatorMethod.Parameters[1].Type is IPointerTypeSymbol)) ||
					(operatorMethod.IsImplicitlyDeclared)
				)
				{
					WriteExpression(expression.Left);
					writer.Write($" {expression.OperatorToken.ValueText} ");
					WriteExpression(expression.Right);
				}
				else
				{
					writer.Write(GetMethodFullName(operatorMethod));
					writer.Write('(');
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
				}
			}
			else
			{
				throw new NotSupportedException("Unsupported binary expression symbol: " + symbol.GetType());
			}
		}

		private void CastExpression(CastExpressionSyntax expression)
		{
			var type = ResolveType(expression.Type);

			// check if this is an explicit operator cast
			var semanticModel = GetSemanticModel(expression);
			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
			if (symbol != null && symbol.Kind == SymbolKind.Method && !symbol.IsExtern && !symbol.IsImplicitlyDeclared)
			{
				var method = ResolveMethod((IMethodSymbol)symbol, this.method);
				if (method.MethodKind == MethodKind.Conversion)
				{
					writer.Write(GetMethodFullName(method));
					writer.Write('(');
					WriteExpression(expression.Expression);
					writer.Write(')');
					return;
				}
			}

			// test up cast
			if (!options.disableDownCastingChecks)
			{
				var castFromType = ResolveType(expression.Expression);
				if
				(
					type.Kind != SymbolKind.PointerType && castFromType.Kind != SymbolKind.PointerType &&
					!IsPrimitiveType(type) && !IsPrimitiveType(castFromType) &&
					!IsOfType(castFromType, type)
				)
				{
					writer.Write($"({GetTypeFullNameRef(type)})CS2X_TestUpCast(");
					WriteExpression(expression.Expression);
					writer.Write($", &{GetRuntimeTypeObjFullName(type)})");
					return;
				}
			}

			// basic / down cast
			writer.Write($"({GetTypeFullNameRef(type)})");
			WriteExpression(expression.Expression);
		}

		private void ThisExpression(ThisExpressionSyntax expression)
		{
			if (method.ContainingType.IsReferenceType) writer.Write("self");
			else writer.Write("(*self)");
		}

		private void BaseExpression(BaseExpressionSyntax expression)
		{
			if (method.ContainingType.IsReferenceType) writer.Write("self");
			else writer.Write("(*self)");
		}

		private delegate void WriteArrayElementAccessOffsetCallback();
		private void WriteArrayElementAccessOffset(WriteArrayElementAccessOffsetCallback writeExpressionCallback, ITypeSymbol type)
		{
			if (type.Kind == SymbolKind.ArrayType)
			{
				writer.Write($"(({GetTypeFullNameRef(type)})(((char*)");
				writeExpressionCallback();
				writer.Write(") + ArrayOffset))");
			}
			else
			{
				writeExpressionCallback();
			}
		}

		private void ElementAccessExpression(ElementAccessExpressionSyntax expression)
		{
			// get index expression
			var arguments = expression.ArgumentList.Arguments;
			if (arguments.Count != 1) throw new NotSupportedException("Elements can only have one arg");
			var indexExpression = arguments[0].Expression;

			// check if element access is custom property method
			var semanticModel = GetSemanticModel(expression);
			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
			if (symbol is IPropertySymbol)
			{
				var property = (IPropertySymbol)symbol;
				if (property.IsIndexer)
				{
					var assignmentExpression = expression.Parent as AssignmentExpressionSyntax;
					if (assignmentExpression != null && assignmentExpression.Left == expression)
					{
						throw new Exception("Setting indexer should happen in assignment expression method");
					}
					else
					{
						var getMethod = ResolveMethod(property.GetMethod, method);
						writer.Write(GetMethodFullName(getMethod));
						writer.Write('(');
						ITypeSymbol callerType = GetCallerType(expression.Expression, expression);
						WriteCallerThisArgument(expression.Expression, expression, getMethod);
						writer.Write(", ");
						WriteExpression(indexExpression);
						writer.Write(')');
					}
					return;
				}
			}

			// write normal element access
			void writeExpression()
			{
				WriteExpression(expression.Expression);
			}

			var type = ResolveType(expression.Expression);
			WriteArrayElementAccessOffset(writeExpression, type);
			writer.Write('[');
			WriteExpression(indexExpression);
			writer.Write(']');
		}

		private void ParenthesizedExpression(ParenthesizedExpressionSyntax expression)
		{
			writer.Write('(');
			WriteExpression(expression.Expression);
			writer.Write(')');
		}

		private void SizeOfExpression(SizeOfExpressionSyntax expression)
		{
			var type = ResolveType(expression.Type);
			writer.Write($"sizeof({GetTypeFullNameRef(type)})");
		}

		private void TypeOfExpression(TypeOfExpressionSyntax expression)
		{
			var type = ResolveType(expression.Type);
			writer.Write($"(&{GetRuntimeTypeObjFullName(type)})");
		}

		private void DefaultExpression(DefaultExpressionSyntax expression)
		{
			var type = ResolveType(expression.Type);
			WriteDefaultValue(type, expression);
		}

		private void CheckedExpression(CheckedExpressionSyntax expression)
		{
			WriteExpression(expression.Expression);
		}

		private void ThrowExpression(ThrowExpressionSyntax expression)
		{
			writer.WritePrefix("CS2X_ThreadExceptionObject = ");
			WriteExpression(expression.Expression);
			writer.WriteLine(';');
			writer.WriteLinePrefix("longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */");
		}
	}
}
