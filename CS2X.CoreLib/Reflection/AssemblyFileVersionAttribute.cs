namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyFileVersionAttribute : Attribute
	{
		private readonly string _version;

		public AssemblyFileVersionAttribute(string version)
		{
			_version = version;
		}

		public string Version
		{
			get
			{
				return _version;
			}
		}
	}
}
