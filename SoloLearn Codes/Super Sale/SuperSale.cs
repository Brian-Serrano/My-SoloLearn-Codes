using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {

            double[] p = Array.ConvertAll(Console.ReadLine().Split(','), double.Parse);
            Array.Sort(p);
            double s = 0;
            Array.Resize(ref p, p.Length - 1);
            foreach (double x in p) s += x;
            Console.WriteLine(Convert.ToInt32(Math.Floor(s * 0.3 * 0.07 + s * 0.3)));

        }
    }
}