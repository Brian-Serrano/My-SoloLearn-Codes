using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string dt1 = Console.ReadLine();
            string dt2 = Console.ReadLine();
            Console.WriteLine("{0:dd}", DateTime.Parse(dt2).Subtract(DateTime.Parse(dt1)));
        }
    }
}