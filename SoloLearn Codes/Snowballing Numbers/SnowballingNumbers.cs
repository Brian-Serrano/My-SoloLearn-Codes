using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int number = Convert.ToInt32(Console.ReadLine());
            int[] numbers = new int[number]
                .Select(x => Convert.ToInt32(Console.ReadLine()))
                .ToArray();
            Console.WriteLine(Enumerable.Range(0, number)
                .All(x => Enumerable.Range(0, x)
                .Select(y => numbers[y])
                .Sum() < numbers[x]) ? "true" : "false");
        }
    }
}