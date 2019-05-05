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

		public Transpiler(Solution solution)
		{
			this.solution = solution;
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

		protected bool PropertyIsFieldBacked(IPropertySymbol property)
		{
			return property.GetMethod == null && property.SetMethod == null;
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

		protected int GetBaseTypeCount(ITypeSymbol type)
		{
			int count = 0;
			var baseType = type.BaseType;
			while (baseType != null)
			{
				++count;
				baseType = baseType.BaseType;
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
