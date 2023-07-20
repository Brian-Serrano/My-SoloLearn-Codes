using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Convert.ToString(Convert.ToInt32(Console.ReadLine()), 2).Where(ch => ch == '1').Count());
        }
    }
}