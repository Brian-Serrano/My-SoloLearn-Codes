using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int c = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            int k = c % b;
            Console.Write(k >= 7 ? "Cake Time" : $"I need to buy {7 - k} more");
        }
    }
}