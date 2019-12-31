using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace CS2X.Analyzer.SyntaxValidation
{
	public class SpecialTypes
	{
		public INamedTypeSymbol runtimeType, typeType, attributeType;
		public INamedTypeSymbol arrayType, objectType, int32Type;
		public INamedTypeSymbol stringType, charType;
		public INamedTypeSymbol delegateType, multicastDelegateType;
		public INamedTypeSymbol ienumerableT, ienumerable, ienumeratorT, ienumerator;
		public IMethodSymbol ienumerableT_GetEnumerator, ienumerable_GetEnumerator, ienumeratorT_GetEnumerator, ienumerator_GetEnumerator;

		public SpecialTypes(CSharpCompilation compilation)
		{
			// get common types
			runtimeType = compilation.GetTypeByMetadataName("System.RuntimeType");
			typeType = compilation.GetTypeByMetadataName("System.Type");
			attributeType = compilation.GetTypeByMetadataName("System.Attribute");

			arrayType = compilation.GetSpecialType(SpecialType.System_Array);
			objectType = compilation.GetSpecialType(SpecialType.System_Object);
			int32Type = compilation.GetSpecialType(SpecialType.System_Int32);

			stringType = compilation.GetSpecialType(SpecialType.System_String);
			charType = compilation.GetSpecialType(SpecialType.System_Char);

			delegateType = compilation.GetSpecialType(SpecialType.System_Delegate);
			multicastDelegateType = compilation.GetSpecialType(SpecialType.System_MulticastDelegate);

			// get common generic types
			ienumerableT = compilation.GetSpecialType(SpecialType.System_Collections_Generic_IEnumerable_T);
			ienumerable = compilation.GetSpecialType(SpecialType.System_Collections_IEnumerable);
			ienumeratorT = compilation.GetSpecialType(SpecialType.System_Collections_Generic_IEnumerator_T);
			ienumerator = compilation.GetSpecialType(SpecialType.System_Collections_IEnumerator);
			ienumerableT_GetEnumerator = FindMethodByName(ienumerableT, "GetEnumerator");
			ienumerable_GetEnumerator = FindMethodByName(ienumerable, "GetEnumerator");
			ienumeratorT_GetEnumerator = FindMethodByName(ienumeratorT, "get_Current");
			ienumerator_GetEnumerator = FindMethodByName(ienumerator, "get_Current");
		}

		private IMethodSymbol FindMethodByName(ITypeSymbol type, string methodName)
		{
			return type.GetMembers().FirstOrDefault(x => x.Kind == SymbolKind.Method && x.Name == methodName) as IMethodSymbol;
		}

		public bool IgnoredSpecialGenericInterfaceMethod(IMethodSymbol method)
		{
			foreach (var interfaceMethod in method.ExplicitInterfaceImplementations)
			{
				var originalMethod = interfaceMethod.OriginalDefinition;
				if (originalMethod.IsEqual(ienumerableT_GetEnumerator) || originalMethod.IsEqual(ienumerable_GetEnumerator) || originalMethod.IsEqual(ienumerator_GetEnumerator))
				{
					return true;
				}
			}
			return false;
		}
	}
}
