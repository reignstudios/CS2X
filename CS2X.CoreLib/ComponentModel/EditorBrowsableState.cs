namespace System.ComponentModel
{
	public enum EditorBrowsableState
	{
		//
		// Summary:
		//     The property or method is always browsable from within an editor.
		Always = 0,
		//
		// Summary:
		//     The property or method is never browsable from within an editor.
		Never = 1,
		//
		// Summary:
		//     The property or method is a feature that only advanced users should see. An editor
		//     can either show or hide such properties.
		Advanced = 2
	}
}
