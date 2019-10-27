namespace PortableTestApp.Test
{
	class ClassVsStruct
	{
		ClassVsStruct_Struct myStruct;

		public static bool RunTest()
		{
			var obj = new ClassVsStruct()
			{
				myStruct = new ClassVsStruct_Struct()
			};
			obj.myStruct.myClass = obj;
			var value = obj.myStruct;
			value.myClass = null;
			return value.myClass != obj.myStruct.myClass;
		}
	}

	struct ClassVsStruct_Struct
	{
		public ClassVsStruct myClass;
	}
}
