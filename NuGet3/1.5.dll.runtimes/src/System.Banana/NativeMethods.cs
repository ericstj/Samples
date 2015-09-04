using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace System.Banana
{
    internal static class NativeMethods
    {
        [DllImport("cherry.dll", CharSet=CharSet.Ansi)]
        public static extern IntPtr GetCherries();
    }
}
