using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            char[] a = Console.ReadLine().ToCharArray();
            Array.Reverse(a);
            foreach (char c in a) if (char.IsLetter(c) || char.IsWhiteSpace(c)) Console.Write(c);
        }
    }
}