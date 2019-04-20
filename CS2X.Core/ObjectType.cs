using Microsoft.CodeAnalysis;
using System;
using System.Collections.Generic;
using System.Text;

namespace CS2X.Core
{
	public class ObjectType
	{
		public readonly INamedTypeSymbol type;

		public ObjectType(INamedTypeSymbol type)
		{
			this.type = type;
		}
	}
}
