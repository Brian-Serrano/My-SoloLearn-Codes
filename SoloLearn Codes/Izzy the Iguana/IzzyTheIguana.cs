using System;
using System.Collections.Generic;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            IDictionary<string, int> lst = new Dictionary<string, int>() {
                { "Mango", 9 },
                { "Carrot", 4 },
                { "Lettuce", 5 },
                { "Cheeseburger", 0 }
            };
            Console.WriteLine(Console.ReadLine()
                .Split()
                .Select(w => lst.ContainsKey(w) ? lst[w] : 0)
                .Sum() >= 10 ? "Come on Down!" : "Time to wait");
        }
    }
}