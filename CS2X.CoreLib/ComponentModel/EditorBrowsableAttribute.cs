namespace System.ComponentModel
{
	[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate)]
	public sealed class EditorBrowsableAttribute : Attribute
	{
		private readonly EditorBrowsableState _browsableState;

		public EditorBrowsableAttribute(EditorBrowsableState state)
		{
			_browsableState = state;
		}

		public EditorBrowsableState State
		{
			get
			{
				return _browsableState;
			}
		}
	}
}
