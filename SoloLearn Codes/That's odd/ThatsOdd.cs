using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(new int[n].Select(x => Convert.ToInt32(Console.ReadLine())).Where(x => x % 2 == 0).Sum());
        }
    }
}