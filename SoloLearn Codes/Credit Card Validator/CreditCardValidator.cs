using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            Console.WriteLine(input.Reverse()
                .Select((c, i) => i % 2 == 1 ? (int) char.GetNumericValue(c) * 2 : (int) char.GetNumericValue(c))
                .Select(x => x > 9 ? x - 9 : x)
                .Sum() % 10 == 0 && input.Length == 16 ? "valid" : "not valid");
        }
    }
}