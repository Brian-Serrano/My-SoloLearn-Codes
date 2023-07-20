using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Array.ConvertAll(Console.ReadLine().Split(','), double.Parse)
                .Select(a => a < 20 ? a * 1.07 : a).Sum());
        }
    }
}