namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyVersionAttribute : Attribute
	{
		private readonly string _version;

		public AssemblyVersionAttribute(string version)
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
