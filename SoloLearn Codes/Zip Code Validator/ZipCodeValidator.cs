using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string z = Console.ReadLine();
            Console.Write(z.Length != 5 || z.Count(c => Char.IsWhiteSpace(c) || !Char.IsDigit(c)) > 0 ? "false" : "true");
        }
    }
}