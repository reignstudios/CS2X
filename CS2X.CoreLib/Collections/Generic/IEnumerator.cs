namespace System.Collections.Generic
{
	public interface IEnumerator<T> : IEnumerator
    {
		new T Current { get; }
    }
}
