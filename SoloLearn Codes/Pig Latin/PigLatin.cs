using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] words = Console.ReadLine().Split();
            foreach (string w in words) Console.Write($"{w.Substring(1)}{w.Substring(0, 1)}ay ");
        }
    }
}