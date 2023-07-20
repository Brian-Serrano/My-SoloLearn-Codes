using System.Linq;
using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int t = s.Count() - s.Count(c => char.IsWhiteSpace(c) || c == '?');
            Console.WriteLine(Math.Ceiling(t / (double) s.Split().Count()));
        }
    }
}