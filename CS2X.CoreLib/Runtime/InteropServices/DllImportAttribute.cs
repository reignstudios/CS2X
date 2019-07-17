namespace System.Runtime.InteropServices
{
	[AttributeUsage(AttributeTargets.Method, Inherited = false)]
    public sealed class DllImportAttribute : Attribute
    {
		public string Value { get; }
        public string EntryPoint;
        public CallingConvention CallingConvention;

        public DllImportAttribute(string dllName)
        {
            Value = dllName;
        }
    }
}
