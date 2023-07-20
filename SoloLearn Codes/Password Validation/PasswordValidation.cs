using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            int x = str.Count(c => char.IsNumber(c));
            char[] symbolsPattern = { '!', '@', '#', '$', '%', '&', '*' };
            int[] y = new int[symbolsPattern.Length];
            for (int i = 0; i < symbolsPattern.Length; i++) y[i] = str.Count(c => c == symbolsPattern[i]);
            Console.WriteLine(x >= 2 && y.Sum() >= 2 && str.Length >= 7 ? "Strong" : "Weak");
        }
    }
}