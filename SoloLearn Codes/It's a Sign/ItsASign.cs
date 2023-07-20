using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(new int[4]
                .Select(i => Console.ReadLine())
                .Any(i => Equals(i, string.Concat(Enumerable.Reverse(i)))) ? "Open" : "Trash");

        }
    }
}
