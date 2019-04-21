namespace System
{
	//
	// Summary:
	//     Indicates that a field of a serializable class should not be serialized. This
	//     class cannot be inherited.
	[AttributeUsage(AttributeTargets.Field, Inherited = false)]
	public sealed class NonSerializedAttribute : Attribute
	{
	}
}