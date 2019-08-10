namespace System
{
	public abstract class Delegate
	{
		internal IntPtr _methodPtr;

		private object _target;
		public object Target => _target;

		public static bool operator==(Delegate a, Delegate b)
		{
			return true;
		}

		public static bool operator!=(Delegate a, Delegate b)
		{
			return true;
		}

		public static Delegate Combine(Delegate a, Delegate b)
        {
            if (a == null) return b;
			var ma = (MulticastDelegate)a;
			var mb = (MulticastDelegate)b;
			var last = ma;
			while (last._next != null) last = last._next;
			last._next = mb;
			return a;
        }

		public static Delegate Remove(Delegate source, Delegate value)
		{
			if (source == null) return null;
			if (value == null) return source;

			// find last
			var next = (MulticastDelegate)source;
			MulticastDelegate prev = null, last = null, lastPrev = null;
			while (next != null)
			{
				if (next._methodPtr == value._methodPtr && next._target == value._target)
				{
					lastPrev = prev;
					last = next;
				}
				prev = next;
				next = next._next;
			}

			// remove last
			if (last != null)
			{
				if (last == source)
				{
					var multiSource = (MulticastDelegate)source;
					next = multiSource._next;
					multiSource._next = null;
					return next;
				}

				if (lastPrev != null)
				{
					lastPrev._next = last._next;
					last._next = null;
				}
			}

			return source;
		}

		public static Delegate RemoveAll(Delegate source, Delegate value)
		{
			if (source == null) return null;
			if (value == null) return source;

			var next = (MulticastDelegate)source;
			MulticastDelegate prev = null;
			while (next != null)
			{
				var nextItem = next._next;
				if (next._methodPtr == value._methodPtr && next._target == value._target)
				{
					if (next == source)
					{
						source = next._next;
						next._next = null;
					}
					else if (prev != null)
					{
						prev._next = next._next;
						next._next = null;
					}
				}
				prev = next;
				next = nextItem;
			}

			return source;
		}
	}
}
