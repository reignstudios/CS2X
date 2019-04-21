namespace System
{
	[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
	public sealed class CLSCompliantAttribute : Attribute
	{
		private readonly bool _isCompliant;

		public CLSCompliantAttribute(bool isCompliant)
		{
			_isCompliant = isCompliant;
		}

		public bool IsCompliant
		{
			get
			{
				return _isCompliant;
			}
		}
	}
}
