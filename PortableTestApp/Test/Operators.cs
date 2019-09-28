using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	class Operators
	{
		struct Vec2
		{
			public float x, y;

			public Vec2(float x, float y)
			{
				this.x = x;
				this.y = y;
			}

			public static Vec2 operator +(Vec2 value1, Vec2 value2)
			{
				return new Vec2(value1.x + value2.x, value1.y + value2.y);
			}

			public static Vec2 operator -(Vec2 value1)
			{
				return new Vec2(-value1.x, -value1.y);
			}
		}

		public static explicit operator Operators(int value)
		{
			return null;
		}

		public static implicit operator int(Operators value)
		{
			return 123;
		}

		public static bool RunTest()
		{
			var vec1 = new Vec2(1, 1);
			var vec2 = new Vec2(2, 2);
			var vec3 = -(vec1 + vec2);

			var obj = new Operators();
			int i = obj;
			obj = (Operators)i;

			return vec3.x == vec3.y && i == 123 && obj == null;
		}
	}
}
