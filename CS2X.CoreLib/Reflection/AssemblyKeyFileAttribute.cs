namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyKeyFileAttribute : Attribute
	{
		private readonly string _keyFile;

		public AssemblyKeyFileAttribute(string keyFile)
		{
			_keyFile = keyFile;
		}

		public string KeyFile
		{
			get
			{
				return _keyFile;
			}
		}
	}
}
