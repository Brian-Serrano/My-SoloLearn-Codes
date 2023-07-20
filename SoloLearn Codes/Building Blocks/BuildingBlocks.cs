using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(new int[4].Select(x => Convert.ToInt32(Console.ReadLine()) % 15).Sum());
        }
    }
}