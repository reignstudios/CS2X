namespace System.IO
{
	//
	// Summary:
	//     Contains constants for controlling the kind of access other System.IO.FileStream
	//     objects can have to the same file.
	[Flags]
	public enum FileShare
	{
		//
		// Summary:
		//     Declines sharing of the current file. Any request to open the file (by this process
		//     or another process) will fail until the file is closed.
		None = 0,
		//
		// Summary:
		//     Allows subsequent opening of the file for reading. If this flag is not specified,
		//     any request to open the file for reading (by this process or another process)
		//     will fail until the file is closed. However, even if this flag is specified,
		//     additional permissions might still be needed to access the file.
		Read = 1,
		//
		// Summary:
		//     Allows subsequent opening of the file for writing. If this flag is not specified,
		//     any request to open the file for writing (by this process or another process)
		//     will fail until the file is closed. However, even if this flag is specified,
		//     additional permissions might still be needed to access the file.
		Write = 2,
		//
		// Summary:
		//     Allows subsequent opening of the file for reading or writing. If this flag is
		//     not specified, any request to open the file for reading or writing (by this process
		//     or another process) will fail until the file is closed. However, even if this
		//     flag is specified, additional permissions might still be needed to access the
		//     file.
		ReadWrite = 3,
		//
		// Summary:
		//     Allows subsequent deleting of a file.
		Delete = 4
	}
}