namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyInformationalVersionAttribute : Attribute
	{
		private readonly string _informationalVersion;

		public AssemblyInformationalVersionAttribute(string informationalVersion)
		{
			_informationalVersion = informationalVersion;
		}

		public string InformationalVersion
		{
			get
			{
				return _informationalVersion;
			}
		}
	}
}
