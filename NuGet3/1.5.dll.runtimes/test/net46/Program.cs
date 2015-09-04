using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace net46
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WindowHeight = 35;

            while (true)
            {
                Console.WriteLine("(c)herry, (b)anana, or enter to exit.");
                string input = Console.ReadLine();
                switch (input)
                {
                    case "c":
                    case "C":
                        Console.Clear();
                        Console.WriteLine(System.Banana.FruitTree.GetCherries());
                        break;
                    case "b":
                    case "B":
                        Console.Clear();
                        Console.WriteLine(System.Banana.FruitTree.GetBananas());
                        break;
                    case "":
                        return;
                    default:
                        break;
                }
            }
        }
    }
}
