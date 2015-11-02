﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Text;

namespace System.Banana
{

    public static class FruitTree
    {
        public static string GetBananas()
        {
            using (var bananaReader = new StreamReader(typeof(FruitTree).GetTypeInfo().Assembly.GetManifestResourceStream("System.Banana.Bananas.txt")))
            {
                return bananaReader.ReadToEnd();
            }
        }

        public static string GetCherries()
        {
            IntPtr nativeString = NativeMethods.GetCherries();
            return Marshal.PtrToStringAnsi(nativeString);
        }
        
    }
}