namespace System.Runtime.Versioning
{
	public sealed class TargetFrameworkAttribute : Attribute
	{
		public TargetFrameworkAttribute(string frameworkName)
		{
			FrameworkName = frameworkName;
		}
		
		public string FrameworkDisplayName { get; set; }
		public string FrameworkName { get; private set; }
	}
}
