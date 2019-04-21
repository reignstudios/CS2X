namespace System
{
	public struct RuntimeTypeHandle
	{
		private RuntimeType m_type;

		internal RuntimeTypeHandle(RuntimeType type)
        {
            m_type = type;
        }
	}
}
