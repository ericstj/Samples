using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace portable_dotnet
{
    public class Class1
    {
        public void TestMethod()
        {
            Debug.WriteLine(System.Banana.FruitTree.GetBananas());
        }
    }
}
