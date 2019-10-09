using System;
using PortableTestApp.Test;

namespace PortableTestApp
{
	static class Program
	{
		static int Main(string[] args)
		{
			// print args
			Console.WriteLine("Printing args...");
			foreach (string arg in args)
			{
				Console.WriteLine("Arg: " + arg);
			}
			Console.WriteLine();

			// run basic tests
			Console.WriteLine("Running tests...");
			Log(ClassNesting.RunTest(), "ClassNesting");
			Log(ClassVsStruct.RunTest(), "ClassVsStruct");
			Log(Enums.RunTest(), "Enums");
			Log(RefOutParameters.RunTest(), "RefOutParameters");
			Log(FieldsAndProperties.RunTest(), "FieldsAndProperties");
			Log(FlowControlAndEnumerators.RunTest(), "FlowControlAndEnumerators");
			Log(ExtensionMethods.RunTest(), "ExtensionMethods");
			Log(Destructors.RunTest(), "Destructors");
			Log(TryCatch.RunTest(), "TryCatch");
			Log(Interop.RunTest(), "Interop");
			Log(VirtualMethods.RunTest(), "VirtualMethods");
			Log(Generics.RunTest(), "Generics");
			Log(Delegates.RunTest(), "Delegates");
			Log(Indexers.RunTest(), "Indexers");
			Log(Operators.RunTest(), "Operators");
			Log(StringEncoding.RunTest(), "StringEncoding");
			Log(CoreGenericCollections.RunTest(), "CoreGenericCollections");
			Log(NewOverrides.RunTest(), "NewOverrides");
			Console.WriteLine("TESTS DONE!");

			// return result code
			return 99;
		}

		static void Log(bool success, string message)
		{
			if (success) Console.WriteLine("SUCCESS: " + message);
			else Console.WriteLine("ERROR: " + message);
		}
	}
}