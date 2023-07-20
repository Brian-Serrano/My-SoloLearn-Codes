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
                {"Nachos", 6},
                {"Pizza", 6},
                {"Cheeseburger", 10},
                {"Water", 4},
                {"Coke", 5 }
            };
            string[] s = Console.ReadLine().Split();
            int cost = s.Select(w => lst.ContainsKey(w) ? lst[w] : lst["Coke"]).Sum();
            Console.WriteLine(cost + cost * .07);
        }
    }
}