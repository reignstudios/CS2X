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
		private ITypeSymbol ResolveType(ExpressionSyntax syntax)
		{
			var semanticModel = GetSemanticModel(syntax);
			var type = semanticModel.GetTypeInfo(syntax).Type;
			return ResolveType(type);
		}

		private ITypeSymbol ResolveType(ITypeSymbol type)
		{
			return base.ResolveType(type, method);
		}

		private string GetNewObjectMethod(ITypeSymbol type)
		{
			if (IsAtomicType(type)) return "CS2X_AllocTypeAtomic";
			else return "CS2X_AllocType";
		}

		private string GetNewArrayMethod(ITypeSymbol type)
		{
			if (IsAtomicType(type)) return "CS2X_AllocArrayTypeAtomic";
			else return "CS2X_AllocArrayType";
		}

		private string GetFormatedConstValue(object value)
		{
			var type = value.GetType();
			if (type == typeof(float))
			{
				float castValue = (float)value;
				if (castValue >= float.MaxValue)
				{
					return "FLT_MAX";
				}
				else if (castValue <= float.MinValue)
				{
					return "FLT_MIN";
				}
				else
				{
					string result = castValue.ToString();
					if (!result.Contains('.') && !result.Contains('E')) result += ".0";
					result += 'f';
					return result;
				}
			}
			else if (type == typeof(double))
			{
				double castValue = (double)value;
				if (castValue >= double.MaxValue)
				{
					return "DBL_MAX";
				}
				else if (castValue <= double.MinValue)
				{
					return "DBL_MIN";
				}
				else
				{
					string result = castValue.ToString();
					if (!result.Contains('.') && !result.Contains('E')) result += ".0";
					return result;
				}
			}
			else if (type == typeof(char))
			{
				char castValue = (char)value;
				return CharToLiteral(castValue);
			}
			else if (type == typeof(string))
			{
				return TryAddStringLiteral(value.ToString());
			}
			else
			{
				return value.ToString();
			}
		}

		private string GetPrimitiveName(ITypeSymbol type)
		{
			switch (type.SpecialType)
			{
				case SpecialType.System_Boolean: return "char";
				case SpecialType.System_Char: return "char16_t";
				case SpecialType.System_SByte: return "int8_t";
				case SpecialType.System_Byte: return "uint8_t";
				case SpecialType.System_Int16: return "int16_t";
				case SpecialType.System_UInt16: return "uint16_t";
				case SpecialType.System_Int32: return "int32_t";
				case SpecialType.System_UInt32: return "uint32_t";
				case SpecialType.System_Int64: return "int64_t";
				case SpecialType.System_UInt64: return "uint64_t";
				case SpecialType.System_Single: return "float";
				case SpecialType.System_Double: return "double";
				case SpecialType.System_IntPtr: return "intptr_t";
				case SpecialType.System_UIntPtr: return "uintptr_t";
				default: throw new NotImplementedException("Unsupported primitive: " + type.SpecialType);
			}
		}

		private void CheckIfSpecialType(ITypeSymbol type)
		{
			if (type.Kind == SymbolKind.NamedType)
			{
				var namedType = (INamedTypeSymbol)type;
				if (IsResolvedGenericType(namedType)) TrackGenericType(namedType);
			}
			else if (type.Kind == SymbolKind.ArrayType)
			{
				var arrayType = (IArrayTypeSymbol)type;
				TrackArrayType(arrayType);
			}
			else if (type.Kind == SymbolKind.PointerType)
			{
				var pointerType = (IPointerTypeSymbol)type;
				TrackPointerType(pointerType);
			}
		}

		private void CheckType(ITypeSymbol type)
		{
			if (type.TypeKind == TypeKind.Interface) throw new NotSupportedException("Interfaces are not valid runtime types");
			CheckIfSpecialType(type);
		}

		private string GetRuntimeTypeFullName(ITypeSymbol type)
		{
			CheckType(type);
			string fullname = type.FullName();
			if (type.Kind == SymbolKind.ArrayType) fullname += "_ARRAY";
			else if (type.Kind == SymbolKind.PointerType) fullname += "_PTR";
			else if (type.Kind == SymbolKind.NamedType && ((INamedTypeSymbol)type).IsGenericType) fullname += "GENERIC";
			ParseImplementationDetail(ref fullname);
			int nestingCount = NestedCount(type);
			return $"rt{nestingCount}_" + fullname;
		}

		private string GetRuntimeTypeObjFullName(ITypeSymbol type)
		{
			return GetRuntimeTypeFullName(type) + "_OBJ";
		}

		private string GetRuntimeTypeMetadataFullName(ITypeSymbol type)
		{
			return GetRuntimeTypeFullName(type) + "_METADATA";
		}

		private Enabler allowTypePrefix = new Enabler(true);
		protected override string GetTypeFullName(ITypeSymbol type)
		{
			CheckType(type);
			if (GetNativeTypeName(type, NativeTarget.C, out string name))
			{
				return name;
			}
			else if (type.SpecialType == SpecialType.System_Void)
			{
				return "void";
			}
			else if (IsPrimitiveType(type))
			{
				return GetPrimitiveName(type);
			}
			else if (type.Kind == SymbolKind.ArrayType)
			{
				var arrayType = (IArrayTypeSymbol)type;
				return GetTypeFullName(arrayType.ElementType);
			}
			else if (type.Kind == SymbolKind.PointerType)
			{
				var arrayType = (IPointerTypeSymbol)type;
				return GetTypeFullName(arrayType.PointedAtType);
			}
			else if (type.Kind == SymbolKind.NamedType && ((INamedTypeSymbol)type).IsGenericType)
			{
				string result = type.FullName();
				int nestingCount = NestedCount(type);
				ParseImplementationDetail(ref result);
				return $"t{nestingCount}_{result}GENERIC";
			}
			else
			{
				if (allowTypePrefix.enabled)
				{
					int nestingCount = NestedCount(type);
					return $"t{nestingCount}_" + base.GetTypeFullName(type);
				}
				else
				{
					return base.GetTypeFullName(type);
				}
			}
		}

		private string GetTypeFullNameRef(ITypeSymbol type)
		{
			string ptr = string.Empty;
			while (true)
			{
				if (type.Kind == SymbolKind.ArrayType)
				{
					ptr += "*";
					var t = (IArrayTypeSymbol)type;
					type = t.ElementType;
				}
				else if (type.Kind == SymbolKind.PointerType)
				{
					ptr += "*";
					var t = (IPointerTypeSymbol)type;
					type = t.PointedAtType;
				}
				else
				{
					break;
				}
			}

			if (type.IsReferenceType) ptr += "*";

			string result = GetTypeFullName(type);
			result += ptr;
			return result;
		}

		protected override string GetFieldFullName(IFieldSymbol field)
		{
			using (allowTypePrefix.Disable())
			{
				if (GetNativeTypeAttribute(field.ContainingType, NativeTarget.C, out _)) return field.Name;
				string result = base.GetFieldFullName(field);
				if (!field.IsStatic) result = $"f_{result}_{GetBaseTypeCount(field.ContainingType)}";
				else result = $"f_{GetTypeFullName(field.ContainingType)}_{result}";
				return result;
			}
		}

		protected override string GetParameterFullName(IParameterSymbol parameter)
		{
			using (allowTypePrefix.Disable())
			{
				return "p_" + base.GetParameterFullName(parameter);
			}
		}

		protected override string GetLocalFullName(ILocalSymbol local)
		{
			using (allowTypePrefix.Disable())
			{
				return "l_" + base.GetLocalFullName(local);
			}
		}

		private void CheckIfSpecialMethod(IMethodSymbol method)
		{
			if (IsResolvedGenericMethod(method))
			{
				if (genericMethods.Contains(method)) return;
				TrackGenericMethod(method);

				// check method overrides of this generic method and track it too
				if ((method.IsVirtual || method.IsAbstract) && !method.ContainingType.IsSealed)
				{
					var task = SymbolFinder.FindOverridesAsync(method, solution.roslynSolution);
					task.Wait();
					if (!task.IsCompletedSuccessfully) throw new Exception("FindOverridesAsync failed");
					var methodOverrides = task.Result;
					foreach (IMethodSymbol methodOverride in methodOverrides)
					{
						IMethodSymbol resolvedMethod = null;

						// check if method is used in generic type
						var genericType = genericTypes.FirstOrDefault(x => x.ConstructedFrom.Equals(methodOverride.ContainingType));
						if (genericType != null)
						{
							resolvedMethod = (IMethodSymbol)genericType.GetMembers().First(x => x.OriginalDefinition.Equals(methodOverride.OriginalDefinition));
						}

						// construct method and track
						if (resolvedMethod == null) resolvedMethod = methodOverride.Construct(method.TypeArguments.ToArray());
						else resolvedMethod = resolvedMethod.Construct(method.TypeArguments.ToArray());

						TrackGenericMethod(resolvedMethod);
					}
				}

				// check overridden methods of this generic method and track it too
				if (method.IsOverride)
				{
					var overriddenMethod = method.ConstructedFrom.OverriddenMethod;
					while (overriddenMethod != null)
					{
						IMethodSymbol resolvedMethod = null;

						// check if method is used in generic type
						resolvedMethod = overriddenMethod.Construct(method.TypeArguments.ToArray());
						TrackGenericMethod(resolvedMethod);

						overriddenMethod = overriddenMethod.OverriddenMethod;
					}
				}
			}
		}

		protected override string GetMethodFullName(IMethodSymbol method)
		{
			CheckIfSpecialMethod(method);
			using (allowTypePrefix.Disable())
			{
				int index = GetMethodOverloadIndex(method);

				string methodName;
				if (method.IsGenericMethod) methodName = method.FullMethodName();
				else methodName = method.Name;

				ParseImplementationDetail(ref methodName);
				int nestingCount = NestedCount(method);

				if (method.IsGenericMethod) return $"m{nestingCount}_{methodName}_{index}";
				else return $"m{nestingCount}_{GetTypeFullName(method.ContainingType)}_{methodName}_{index}";
			}
		}

		private string GetVTableMethodFullName(IMethodSymbol method)
		{
			if (!IsVirtualMethod(method)) throw new NotSupportedException("Non virtual method has no vtable method name: " + method.FullName());
			CheckIfSpecialMethod(method);
			int vTableIndex = GetVirtualMethodOverloadIndex(method);
			string methodName;
			if (method.IsGenericMethod) methodName = method.Name();
			else methodName = method.Name;
			ParseImplementationDetail(ref methodName);
			return $"vTable_{methodName}_{vTableIndex}";
		}

		protected override string GetContainingTypeDelimiter()
		{
			return "_";
		}

		protected override string GetNamespaceDelimiter()
		{
			return "_";
		}
	}
}
