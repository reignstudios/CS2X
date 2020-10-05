using System;
using System.IO;
using CS2X.Core.Transpilers.C;

namespace CS2X.Core.Test
{
	class Program
	{
		static void Main(string[] args)
		{
			// load solution
			string path = Path.Combine(Environment.CurrentDirectory, @"..\..\..\..\");
			var solution = new Solution(Path.Combine(path, @"PortableTestApp\PortableTestApp.csproj"));

			// parse solution
			var task = solution.Parse("Debug", "AnyCPU");
			task.Wait();

			// transpile solution
			var options = new Transpiler_C.Options()
			{
				api = Transpiler_C.API.Win32,
				gc = Transpiler_C.GC_Type.Boehm,
				gcFolderPath = @"..\CS2X.Native",
				ptrSize = Transpiler_C.Ptr_Size.Bit_64,
				endianness = Transpiler_C.Endianness.Little,
				storeRuntimeTypeStringLiteralMetadata = true,
				stringLiteralMemoryLocation = Transpiler_C.StringLiteralMemoryLocation.GlobalProgramMemory_RAM,
				refNonLocalGCParamsOnStack = false
			};
			var transpiler = new Transpiler_C(solution, options);
			transpiler.Transpile(Path.Combine(path, "TestOutput"));
		}
	}
}
