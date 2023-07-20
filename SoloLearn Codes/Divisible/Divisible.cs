using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            string[] a = Console.ReadLine().Split();
            Console.WriteLine(a.All(x => n % int.Parse(x) == 0) ? "divisible by all" : "not divisible by all");
        }
    }
}