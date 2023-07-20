using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] g = Console.ReadLine().Split();
            string n = Console.ReadLine();
            Console.WriteLine(g.Any(m => m[0] == n[0]) ? "Compare notes" : "No such luck");
        }
    }
}