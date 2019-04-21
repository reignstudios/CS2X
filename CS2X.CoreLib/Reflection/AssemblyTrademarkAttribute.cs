namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyTrademarkAttribute : Attribute
	{
		private readonly string _trademark;

		public AssemblyTrademarkAttribute(string trademark)
		{
			_trademark = trademark;
		}

		public string Trademark
		{
			get
			{
				return _trademark;
			}
		}
	}
}
