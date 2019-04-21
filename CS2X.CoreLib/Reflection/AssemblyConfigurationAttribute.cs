namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyConfigurationAttribute : Attribute
	{
		private readonly string _configuration;

		public AssemblyConfigurationAttribute(string configuration)
		{
			_configuration = configuration;
		}

		public string Configuration
		{
			get
			{
				return _configuration;
			}
		}
	}
}
