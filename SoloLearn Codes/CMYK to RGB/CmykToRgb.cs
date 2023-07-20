using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            float[] CMYK = new float[4];
            for (int i = 0; i < 4; i++) CMYK[i] = Convert.ToSingle(Console.ReadLine());
            float[] RGB = new float[3];
            for (int i = 0; i < 3; i++) RGB[i] = 255 * (1 - CMYK[i]) * (1 - CMYK[3]);

            Console.Write(string.Join(",", RGB.Select(x => string.Format($"{x:0}"))));
        }
    }
}