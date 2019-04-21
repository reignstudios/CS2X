namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyCultureAttribute : Attribute
	{
		private readonly string _culture;

		public AssemblyCultureAttribute(string culture)
		{
			_culture = culture;
		}

		public string Culture
		{
			get
			{
				return _culture;
			}
		}
	}
}
