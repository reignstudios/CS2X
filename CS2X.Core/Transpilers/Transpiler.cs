using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Symbols;
using Microsoft.CodeAnalysis.CSharp.Syntax;

namespace CS2X.Core.Transpilers
{
	public abstract class Transpiler
	{
		public readonly Solution solution;
		protected INamedTypeSymbol runtimeType, stringType, objectType;

		public Transpiler(Solution solution)
		{
			this.solution = solution;
			var coreLibProject = solution.coreLibProject;
			runtimeType = coreLibProject.compilation.GetTypeByMetadataName("System.RuntimeType");
			stringType = coreLibProject.compilation.GetSpecialType(SpecialType.System_String);
			objectType = coreLibProject.compilation.GetSpecialType(SpecialType.System_Object);
		}

		public abstract void Transpile(string outputPath);

		protected virtual string GetTypeFullName(ITypeSymbol type)
		{
			var result = new StringBuilder(type.Name);

			// prefix containing types
			var containingType = type.ContainingType;
			while (containingType != null)
			{
				result.Insert(0, containingType.Name + GetContainingTypeDelimiter());
				containingType = containingType.ContainingType;
			}

			// write namespace
			var baseNamespace = type.ContainingNamespace;
			while (baseNamespace != null)
			{
				if (baseNamespace.IsGlobalNamespace) break;
				result.Insert(0, baseNamespace.Name + GetNamespaceDelimiter());
				baseNamespace = baseNamespace.ContainingNamespace;
			}

			return result.ToString();
		}

		protected virtual string GetFieldFullName(IFieldSymbol field)
		{
			string result = field.Name;
			ParseImplementationDetail(ref result);
			return result;
		}

		protected virtual string GetParameterFullName(IParameterSymbol parameter)
		{
			string result = parameter.Name;
			ParseImplementationDetail(ref result);
			return result;
		}

		protected virtual string GetLocalFullName(ILocalSymbol local)
		{
			string result = local.Name;
			ParseImplementationDetail(ref result);
			return result;
		}

		protected virtual string GetMethodFullName(IMethodSymbol method)
		{
			string result = method.Name;
			ParseImplementationDetail(ref result);
			return result;
		}

		protected abstract string GetContainingTypeDelimiter();
		protected abstract string GetNamespaceDelimiter();

		protected void ParseImplementationDetail(ref string name)
		{
			if (name.Contains('<')) name = name.Replace('<', '_');
			if (name.Contains('>')) name = name.Replace('>', '_');
			if (name.Contains('.')) name = name.Replace('.', '_');
		}

		protected bool IsAutoProperty(IPropertySymbol property) { return IsAutoProperty(property, out _); }
		protected bool IsAutoProperty(IPropertySymbol property, out IFieldSymbol field)
		{
			var members = property.ContainingType.GetMembers();
			field = (IFieldSymbol)members.FirstOrDefault(x => x.Kind == SymbolKind.Field && ((IFieldSymbol)x).AssociatedSymbol == property);
			return field != null;
		}

		protected bool IsAutoPropertyMethod(IMethodSymbol method) { return IsAutoPropertyMethod(method, out _, out _); }
		protected bool IsAutoPropertyMethod(IMethodSymbol method, out IPropertySymbol property, out IFieldSymbol field)
		{
			field = null;
			if (method.MethodKind != MethodKind.PropertyGet && method.MethodKind != MethodKind.PropertySet)
			{
				property = null;
				return false;
			}
			property = method.AssociatedSymbol as IPropertySymbol;
			return property != null && IsAutoProperty((IPropertySymbol)method.AssociatedSymbol, out field);
		}

		protected bool IsEmptyType(ITypeSymbol type, bool staticsDontCount = true)
		{
			var currentType = type;
			if (staticsDontCount)
			{
				while (currentType != null)
				{
					foreach (var member in currentType.GetMembers())
					{
						if (!(member is IFieldSymbol) || member.IsStatic) continue;
						return false;
					}
					currentType = currentType.BaseType;
				}
			}
			else
			{
				while (currentType != null)
				{
					if (currentType.GetMembers().Any(x => x is IFieldSymbol)) return false;
					currentType = currentType.BaseType;
				}
			}

			return true;
		}

		protected bool IsAtomicType(ITypeSymbol type)
		{
			var currentType = type;
			while (currentType != null)
			{
				foreach (var member in currentType.GetMembers())
				{
					if (!(member is IFieldSymbol) || member.IsStatic || ((IFieldSymbol)member).Type.IsValueType) continue;
					return false;
				}
				currentType = currentType.BaseType;
			}

			return true;
		}

		protected bool HasFields(ITypeSymbol type)
		{
			return type.GetMembers().Any(x => x is IFieldSymbol);
		}

		protected bool HasProperties(ITypeSymbol type)
		{
			return type.GetMembers().Any(x => x is IPropertySymbol);
		}

		protected bool HasMethods(ITypeSymbol type)
		{
			return type.GetMembers().Any(x => x is IMethodSymbol);
		}

		protected bool IsPrimitiveType(ITypeSymbol type)
		{
			switch (type.SpecialType)
			{
				case SpecialType.None: return false;
				case SpecialType.System_Boolean:
				case SpecialType.System_Char:
				case SpecialType.System_SByte:
				case SpecialType.System_Byte: 
				case SpecialType.System_Int16:
				case SpecialType.System_UInt16:
				case SpecialType.System_Int32:
				case SpecialType.System_UInt32:
				case SpecialType.System_Int64:
				case SpecialType.System_UInt64:
				case SpecialType.System_Single:
				case SpecialType.System_Double:
				case SpecialType.System_IntPtr:
				case SpecialType.System_UIntPtr:
					return true;
			}
			return false;
		}

		protected int GetBaseTypeCount(INamedTypeSymbol type)
		{
			int count = 0;
			var baseType = type.BaseType;
			while (baseType != null)
			{
				++count;
				baseType = GetBaseType(baseType);
			}
			return count;
		}

		protected int GetMethodOverloadIndex(IMethodSymbol method)
		{
			int index = 0;
			foreach (var typeMethod in method.ContainingType.GetMembers())
			{
				if (typeMethod is IMethodSymbol)
				{
					if (typeMethod == method) break;
					else if (typeMethod.Name == method.Name) ++index;
				}
			}
			return index;
		}

		protected int GetVirtualMethodOverloadIndex(IMethodSymbol method)
		{
			if (!method.IsVirtual && !method.IsAbstract) throw new Exception("Method must be virtual: " + method.FullName());
			if (method.OverriddenMethod != null)
			{
				return GetVirtualMethodOverloadIndex(method.OverriddenMethod);
			}
			else
			{
				bool found = false;
				int index = 0;
				foreach (var member in method.ContainingType.GetMembers())
				{
					var memberMethod = member as IMethodSymbol;
					if (memberMethod == null) continue;
					if (method == memberMethod)
					{
						found = true;
						break;
					}
					if (method.Name == memberMethod.Name) ++index;
				}

				if (!found) throw new Exception("Failed to find virtual method index (this should never happen)");
				return index;
			}
		}

		protected List<IMethodSymbol> GetOrderedVirtualMethods(INamedTypeSymbol type)
		{
			var virtualMethodList = new List<IMethodSymbol>();
			void AddVirtualMethods(INamedTypeSymbol namedType)
			{
				foreach (IMethodSymbol method in namedType.GetMembers().Where(x => x.Kind == SymbolKind.Method).Reverse())
				{
					if ((!method.IsVirtual && !method.IsAbstract) || method.IsOverride) continue;
					virtualMethodList.Insert(0, method);
				}
			}

			var baseType = type;
			do
			{
				AddVirtualMethods(baseType);
				baseType = GetBaseType(baseType);
			} while (baseType != null);

			return virtualMethodList;
		}

		protected IMethodSymbol FindHighestVirtualMethodSlot(INamedTypeSymbol type, IMethodSymbol rootSlotMethod)
		{
			var baseType = type;
			do
			{
				foreach (var member in baseType.GetMembers())
				{
					if (member.Kind != SymbolKind.Method || (!member.IsVirtual && !member.IsAbstract)) continue;
					var method = (IMethodSymbol)member;
					if (method == rootSlotMethod || method.OverriddenMethod == rootSlotMethod) return method;
				}
				baseType = GetBaseType(baseType);
			} while (baseType != null);

			throw new Exception("Failed to find highest virtual method slot");
		}

		protected INamedTypeSymbol GetBaseType(INamedTypeSymbol type)
		{
			if (type.TypeKind == TypeKind.Struct || type.TypeKind == TypeKind.Enum)
			{
				if (type.Interfaces.Length != 0) throw new NotSupportedException("Structs cannot inherit from interfaces");
				return null;
			}
			if (type.TypeKind != TypeKind.Class && type.TypeKind != TypeKind.Interface) throw new NotSupportedException("Unsupported type kind: " + type.TypeKind);
			var baseType = type.BaseType;
			if (baseType == null)
			{
				if (type.Interfaces.Length == 1) baseType = type.Interfaces[0];
				else if (type.Interfaces.Length > 1) throw new NotSupportedException("Multiple interfaces are not supported on type: " + type.FullName());
				else if (type.TypeKind == TypeKind.Interface) baseType = objectType;
			}
			else if (type.Interfaces.Length != 0)
			{
				if (type.Interfaces.Length > 1) throw new NotSupportedException("Multiple interfaces are not supported on type: " + type.FullName());
				else if (baseType == objectType) baseType = type.Interfaces[0];
				else throw new NotSupportedException("Interfaces are not supported on type as it already has a base type: " + type.FullName());
			}
			return baseType;
		}

		protected bool IsInternalCall(IMethodSymbol method)
		{
			foreach (var a in method.GetAttributes())
			{
				if
				(
					a.AttributeClass.ContainingNamespace != null && a.AttributeClass.ContainingNamespace.Name == "CompilerServices" &&
					a.AttributeClass.ContainingNamespace.ContainingNamespace != null && a.AttributeClass.ContainingNamespace.ContainingNamespace.Name == "Runtime" &&
					a.AttributeClass.ContainingNamespace.ContainingNamespace.ContainingNamespace != null && a.AttributeClass.ContainingNamespace.ContainingNamespace.ContainingNamespace.Name == "System" &&
					a.AttributeClass.Name == "MethodImplAttribute"
				)
				{
					if ((int)a.ConstructorArguments[0].Value == 0x1000) return true;
				}
			}
			return false;
		}
	}
}
