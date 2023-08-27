using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            float[] CMYK = new float[4].Select(x => Convert.ToSingle(Console.ReadLine())).ToArray();
            Console.Write(string.Join(",", Enumerable.Range(0, 3).Select(x => 255 * (1 - CMYK[x]) * (1 - CMYK[3])).Select(x => string.Format($"{x:0}"))));
        }
    }
}