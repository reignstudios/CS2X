namespace CS2X.Core.Transpilers.C
{
	public sealed partial class Transpiler_C
	{
		public enum GC_Type
		{
			/// <summary>
			/// Disable the GC entirely. Not safe.
			/// Good for super low memory and special embedded devices.
			/// </summary>
			Disabled,

			/// <summary>
			/// Allocates memory but doesn't scan or clean-up
			/// Good for port testing
			/// </summary>
			Dumby,

			/// <summary>
			/// Modern platforms. Thread safe.
			/// </summary>
			Boehm,

			/// <summary>
			/// Legacy or unsupported Boehm platforms. Not thread safe.
			/// </summary>
			Portable,

			/// <summary>
			/// Super low memory or embedded devices. Not thread safe.
			/// </summary>
			Micro
		}

		public enum Ptr_Size
		{
			Bit_8 = 1,
			Bit_16 = 2,
			Bit_32 = 4,
			Bit_64 = 8,
			Bit_128 = 16
		}

		public enum Endianness
		{
			Little,
			Big
		}

		public enum StringLiteralMemoryLocation
		{
			/// <summary>
			/// Stores string literals in shared global memory (RAM).
			/// This allows for runtime type info such as: "Abc".GetType()
			/// </summary>
			GlobalProgramMemory_RAM,

			/// <summary>
			/// Stores string literals in AVR program flash memory.
			/// Runtime type info will not work: "Abc".GetType() = null ref error
			/// </summary>
			ReadonlyProgramMemory_AVR
		}

		public enum API
		{
			/// <summary>
			/// Legacy Windows desktop platforms
			/// </summary>
			Win16,

			/// <summary>
			/// Windows desktop platforms
			/// </summary>
			Win32,

			/// <summary>
			/// Posix compliant platforms such as Linux, BSD, macOS, etc
			/// </summary>
			Posix,

			/// <summary>
			/// Classic Mac OS 9,8,7,6, etc
			/// </summary>
			MacOS_Classic,

			/// <summary>
			/// Non standard / embedded platforms
			/// NOTE: will disable API specific features such as DllImport and Threads
			/// </summary>
			Other
		}

		public struct Options
		{
			/// <summary>
			/// API target
			/// </summary>
			public API api;

			/// <summary>
			/// Target Garbage Collector
			/// This will generate the proper C #includes
			/// </summary>
			public GC_Type gc;

			/// <summary>
			/// Garbage Collector file path
			/// </summary>
			public string gcFolderPath;

			/// <summary>
			/// Native pointer size in bits (native int)
			/// </summary>
			public Ptr_Size ptrSize;

			/// <summary>
			/// CPU bit order
			/// </summary>
			public Endianness endianness;

			/// <summary>
			/// Whether or not to store runtime type string literal metadata.
			/// Metadata such as Type.FullName etc
			/// </summary>
			public bool storeRuntimeTypeStringLiteralMetadata;

			/// <summary>
			/// Memory location string literals are stored
			/// </summary>
			public StringLiteralMemoryLocation stringLiteralMemoryLocation;

			/// <summary>
			/// Disables down casting checks for extra performance
			/// </summary>
			public bool disableDownCastingChecks;

			/// <summary>
			/// Reference Non-Local GC objects on the stack before passing them as 'ref' or 'out' parameters.
			/// This may be needed for a GC that doesn't scan registers on a CPU that uses a calling convention where registers are used as parameters.
			/// </summary>
			public bool refNonLocalGCParamsOnStack;
		}
	}
}
