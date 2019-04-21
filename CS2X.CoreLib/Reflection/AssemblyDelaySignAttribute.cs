namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Assembly, Inherited = false)]
	public sealed class AssemblyDelaySignAttribute : Attribute
	{
		private readonly bool _delaySign;

		public AssemblyDelaySignAttribute(bool delaySign)
		{
			_delaySign = delaySign;
		}

		public bool DelaySign
		{
			get
			{
				return _delaySign;
			}
		}
	}
}
