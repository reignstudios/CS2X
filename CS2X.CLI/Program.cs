using System;
using System.IO;
using CS2X.Core;
using CS2X.Core.Transpilers.C;

namespace CS2X.CLI
{
	class Program
	{
		static void Main(string[] args)
		{
			// TODO: remove: DEV hack
			args = new string[]
			{
				"-s", @"..\..\..\..\..\..\Platforms\Win32\CS2X\Orbital.sln",
				"-o", @"..\..\..\..\..\..\Platforms\Win32\CS2X\Native\bin\C"
			};

			// print help
			if (args.Length == 0)
			{
				Console.WriteLine(">>>>> HELP <<<<<<");
				Console.WriteLine("-s <*.sln | *.csproj>");
				Console.WriteLine("-o <output-folder>");
				return;
			}

			// parse args
			string inputSolution = null;
			string outputFolder = null;
			for (int i = 0; i < args.Length; ++i)
			{
				string arg = args[i];
				switch (arg)
				{
					case "-s":
						++i;
						if (i >= args.Length) continue;
						inputSolution = args[i];
						break;

					case "-o":
						++i;
						if (i >= args.Length) continue;
						outputFolder = args[i];
						break;

					default:
						Console.WriteLine("Unsupported arg: " + arg);
						return;
				}
			}

			// validate args
			if (!File.Exists(inputSolution))
			{
				Console.WriteLine($"'{inputSolution}' doesn't exist");
				return;
			}

			string inputExt = Path.GetExtension(inputSolution);
			if (inputExt != ".sln" && inputExt != ".csproj")
			{
				Console.WriteLine($"'{inputSolution}' isn't supported input file type");
				return;
			}

			if (!Directory.Exists(outputFolder))
			{
				Console.WriteLine("Output folder doesn't exist. Creating!");
				Directory.CreateDirectory(outputFolder);
			}

			// load solution
			Console.WriteLine("Loading solution: " + inputSolution);
			var solution = new Solution(inputSolution);

			// parse solution
			Console.WriteLine("Parsing solution...");
			var task = solution.Parse("Debug", "AnyCPU");
			task.Wait();

			// transpile solution
			Console.WriteLine("Transpiling solution...");
			var options = new Transpiler_C.Options()
			{
				api = Transpiler_C.API.Win32,
				gc = Transpiler_C.GC_Type.Boehm,
				gcFolderPath = @"..\..\..\..\..\..\Submodules\CS2X\CS2X.Native",
				ptrSize = Transpiler_C.Ptr_Size.Bit_64,
				endianness = Transpiler_C.Endianness.Little,
				storeRuntimeTypeStringLiteralMetadata = true,
				stringLiteralMemoryLocation = Transpiler_C.StringLiteralMemoryLocation.GlobalProgramMemory_RAM,
				refNonLocalGCParamsOnStack = false
			};
			var transpiler = new Transpiler_C(solution, options);
			transpiler.Transpile(outputFolder);

			// finish
			Console.WriteLine("DONE!");
		}
	}
}
