using CS2X;

namespace System
{
	public static class GC
	{
		[NativeExtern(NativeTarget.C, "CS2X_GC_Collect")]
		public static extern void Collect();

		/// <summary>
		/// Disables GC collections before allocations if possible (default is enabled)
		/// </summary>
		/// <returns>True if was enabled</returns>
		[NativeExtern(NativeTarget.C, "CS2X_GC_DisableAutoCollections")]
		public static extern bool DisableAutoCollections();

		/// <summary>
		/// Enables GC collections before allocations (default is enabled)
		/// </summary>
		/// <returns>True if was disabled</returns>
		[NativeExtern(NativeTarget.C, "CS2X_GC_EnableAutoCollections")]
		public static extern bool EnableAutoCollections();
	}
}
