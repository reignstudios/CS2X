namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyDescriptionAttribute : Attribute
	{
		private readonly string _description;

		public AssemblyDescriptionAttribute(string description)
		{
			_description = description;
		}

		public string Description
		{
			get
			{
				return _description;
			}
		}
	}
}
