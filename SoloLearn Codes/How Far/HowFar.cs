using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            Console.WriteLine(Math.Abs(s.IndexOf("H") - s.IndexOf("P")) - 1);
        }
    }
}