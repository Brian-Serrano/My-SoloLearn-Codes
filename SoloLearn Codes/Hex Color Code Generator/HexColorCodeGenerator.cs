using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("#");
            for (int i = 0; i < 3; i++) Console.Write(Convert.ToInt32(Console.ReadLine()).ToString("x"));
        }
    }
}