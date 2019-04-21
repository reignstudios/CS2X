namespace System.Diagnostics
{
	public sealed class ConditionalAttribute : Attribute
	{
		private readonly string _conditionString;

		public ConditionalAttribute(string conditionString)
		{
			_conditionString = conditionString;
		}

		public string ConditionString
		{
			get
			{
				return _conditionString;
			}
		}
	}
}
