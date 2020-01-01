namespace System.IO
{
	//
	// Summary:
	//     Specifies how the operating system should open a file.
	public enum FileMode
	{
		//
		// Summary:
		//     Specifies that the operating system should create a new file. This requires System.Security.Permissions.FileIOPermissionAccess.Write
		//     permission. If the file already exists, an System.IO.IOException exception is
		//     thrown.
		CreateNew = 1,
		//
		// Summary:
		//     Specifies that the operating system should create a new file. If the file already
		//     exists, it will be overwritten. This requires System.Security.Permissions.FileIOPermissionAccess.Write
		//     permission. FileMode.Create is equivalent to requesting that if the file does
		//     not exist, use System.IO.FileMode.CreateNew; otherwise, use System.IO.FileMode.Truncate.
		//     If the file already exists but is a hidden file, an System.UnauthorizedAccessException
		//     exception is thrown.
		Create = 2,
		//
		// Summary:
		//     Specifies that the operating system should open an existing file. The ability
		//     to open the file is dependent on the value specified by the System.IO.FileAccess
		//     enumeration. A System.IO.FileNotFoundException exception is thrown if the file
		//     does not exist.
		Open = 3,
		//
		// Summary:
		//     Specifies that the operating system should open a file if it exists; otherwise,
		//     a new file should be created. If the file is opened with FileAccess.Read, System.Security.Permissions.FileIOPermissionAccess.Read
		//     permission is required. If the file access is FileAccess.Write, System.Security.Permissions.FileIOPermissionAccess.Write
		//     permission is required. If the file is opened with FileAccess.ReadWrite, both
		//     System.Security.Permissions.FileIOPermissionAccess.Read and System.Security.Permissions.FileIOPermissionAccess.Write
		//     permissions are required.
		OpenOrCreate = 4,
		//
		// Summary:
		//     Opens the file if it exists and seeks to the end of the file, or creates a new
		//     file. This requires System.Security.Permissions.FileIOPermissionAccess.Append
		//     permission. FileMode.Append can be used only in conjunction with FileAccess.Write.
		//     Trying to seek to a position before the end of the file throws an System.IO.IOException
		//     exception, and any attempt to read fails and throws a System.NotSupportedException
		//     exception.
		Append = 6
	}
}
