using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            char[] a = Console.ReadLine().ToCharArray();
            foreach (char c in a) if (char.IsLetter(c) || char.IsDigit(c) || char.IsWhiteSpace(c)) Console.Write(c);
        }
    }
}