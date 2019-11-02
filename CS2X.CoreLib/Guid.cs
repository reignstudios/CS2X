using System.Runtime.InteropServices;

namespace System
{
	[StructLayout(LayoutKind.Sequential)]
	public unsafe struct Guid
	{
		private fixed byte data[16];

		public static readonly Guid Empty = new Guid();

		public static Guid NewGuid()
		{
			var guid = new Guid();
			// TODO
			return guid;
		}

		public string ToString()
		{
			return "00000000-0000-0000-0000-000000000000";
		}
	}
}
