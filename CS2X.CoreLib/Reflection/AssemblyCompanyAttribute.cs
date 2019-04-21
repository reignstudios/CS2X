namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyCompanyAttribute : Attribute
	{
		private readonly string _company;

		public AssemblyCompanyAttribute(string company)
		{
			_company = company;
		}

		public string Company
		{
			get
			{
				return _company;
			}
		}
	}
}
