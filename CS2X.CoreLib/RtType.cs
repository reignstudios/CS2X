using System.Runtime.CompilerServices;

namespace System
{
	internal sealed class RuntimeType : TypeInfo//, ICloneable
	{
		private Type _baseType;
		public override Type BaseType => _baseType;

		private string _name;
		public override string Name => _name;

		private string _fullName;
		public override string FullName => _fullName;

		public override RuntimeTypeHandle TypeHandle => new RuntimeTypeHandle(this);
	}
}
