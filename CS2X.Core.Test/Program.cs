using CS2X.Core;
using CS2X.Core.Transpilers;
using System;
using System.IO;

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
			var task = solution.Parse();
			task.Wait();

			// transpile solution
			var options = new Transpiler_C.Options()
			{
				api = Transpiler_C.API.Win32,
				gc = Transpiler_C.GC_Type.Dumby,
				gcFolderPath = @"..\CS2X.Native",
				ptrSize = Transpiler_C.Ptr_Size.Bit_64,
				endianness = Transpiler_C.Endianness.Little,
				storeRuntimeTypeStringLiteralMetadata = true,
				stringLiteralMemoryLocation = Transpiler_C.StringLiteralMemoryLocation.GlobalProgramMemory_RAM
			};
			var transpiler = new Transpiler_C(solution, options);
			transpiler.Transpile(Path.Combine(path, "TestOutput"));
		}
	}
}
