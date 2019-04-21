namespace System.Reflection
{
	[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface)]
	public sealed class DefaultMemberAttribute : Attribute
	{
		private readonly string _memberName;

		public DefaultMemberAttribute(string memberName)
		{
			_memberName = memberName;
		}

		public string MemberName
		{
			get
			{
				return _memberName;
			}
		}
	}
}
