namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyProductAttribute : Attribute
	{
		private readonly string _product;

		public AssemblyProductAttribute(string product)
		{
			_product = product;
		}

		public string Product
		{
			get
			{
				return _product;
			}
		}
	}
}
