namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyCopyrightAttribute : Attribute
	{
		private readonly string _copyright;

		public AssemblyCopyrightAttribute(string copyright)
		{
			_copyright = copyright;
		}

		public string Copyright
		{
			get
			{
				return _copyright;
			}
		}
	}
}
