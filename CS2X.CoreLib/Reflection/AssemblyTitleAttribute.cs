namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyTitleAttribute : Attribute
	{
		private readonly string _title;

		public AssemblyTitleAttribute(string title)
		{
			_title = title;
		}

		public string Title
		{
			get
			{
				return _title;
			}
		}
	}
}
