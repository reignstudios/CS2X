namespace System.IO
{
	public class FileNotFoundException : Exception
	{
		public FileNotFoundException() { }

		public FileNotFoundException(string message) : base(message)
		{ }
	}
}
