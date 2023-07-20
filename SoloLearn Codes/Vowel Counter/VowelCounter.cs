using System;
using System.Linq;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Console.ReadLine().ToLower().Count(ch => "aeiou".Any(v => ch == v)));
        }
    }
}