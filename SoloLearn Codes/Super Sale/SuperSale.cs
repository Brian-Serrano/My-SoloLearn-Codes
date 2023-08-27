using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {

            double[] p = Array.ConvertAll(Console.ReadLine().Split(','), double.Parse);
            Console.WriteLine((int)((p.Aggregate((x, y) => x + Math.Floor(y)) - p.Max()) * 1.07 * 0.3));

        }
    }
}