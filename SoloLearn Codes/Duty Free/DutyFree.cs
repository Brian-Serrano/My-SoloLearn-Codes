using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Array
                .ConvertAll(Console.ReadLine()
                .Split(), double.Parse)
                .Any(x => x * 1.1 > 20) ? "Back to the store" : "On to the terminal");
        }
    }
}