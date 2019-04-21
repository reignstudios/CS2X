namespace System
{
	[AttributeUsage(AttributeTargets.Class, Inherited = true)]
	public sealed class AttributeUsageAttribute : Attribute
	{
		private AttributeTargets _attributeTarget = AttributeTargets.All;

		public AttributeUsageAttribute(AttributeTargets validOn)
		{
			_attributeTarget = validOn;
		}
		
		public AttributeTargets ValidOn
		{
			get
			{
				return _attributeTarget;
			}
		}

		public bool AllowMultiple { get; set; }
		public bool Inherited { get; set; }
	}
}
