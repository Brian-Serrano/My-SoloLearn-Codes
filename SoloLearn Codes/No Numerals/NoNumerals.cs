using System.Linq;
using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] arr = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
            Console.WriteLine(string
                .Join(" ", Console.ReadLine()
                .Split()
                .Select(w => char.IsDigit(w[0]) ? arr[Convert.ToInt32(w)] : w)
                .ToArray()));
            ;
        }
    }
}