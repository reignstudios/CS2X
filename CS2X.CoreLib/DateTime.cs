using CS2X;

namespace System
{
    public class DateTime
    {
        public int Day => _internalDate.tm_mday;

        public DayOfWeek DayOfWeek => (DayOfWeek)_internalDate.tm_wday;

        public int DayOfYear => _internalDate.tm_yday;

        public int Hour => _internalDate.tm_hour;

        public int Millisecond => 0;

        public int Minute => _internalDate.tm_min;

        public int Second => _internalDate.tm_sec;

        public int Month => _internalDate.tm_mon + 1;

        public int Year => _internalDate.tm_year + 1900;

        public static DateTime Now => new DateTime();

        private readonly tm _internalDate;

        public unsafe DateTime()
        {
            tm vp;
            long timeT = time(null);
            localtime_s(&vp, &timeT);
            _internalDate = vp;
        }

        [NativeExtern(NativeExternTarget.C)]
        private static extern unsafe Int64 time(Int64* text);

        [NativeExtern(NativeExternTarget.C)]
        private static extern unsafe void localtime_s(tm* res, Int64* text);
    }
    
    public enum DayOfWeek
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
    }

    public struct tm
    {
        public int tm_sec;         /* seconds,  range 0 to 59          */
        public int tm_min;         /* minutes, range 0 to 59           */
        public int tm_hour;        /* hours, range 0 to 23             */
        public int tm_mday;        /* day of the month, range 1 to 31  */
        public int tm_mon;         /* month, range 0 to 11             */
        public int tm_year;        /* The number of years since 1900   */
        public int tm_wday;        /* day of the week, range 0 to 6    */
        public int tm_yday;        /* day in the year, range 0 to 365  */
        public int tm_isdst;       /* daylight saving time             */
    }
}