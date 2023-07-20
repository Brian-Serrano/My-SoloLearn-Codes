using System;
using System.Collections.Generic;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            Console.WriteLine((s.Length != new HashSet<char>(s.ToCharArray()).Count) ? "Deja Vu" : "Unique");
        }
    }
}