using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] hand = Console.ReadLine().Split();
            Dictionary<string, int> rankValues = new Dictionary<string, int>()
            {
                ["2"] = 2,
                ["3"] = 3,
                ["4"] = 4,
                ["5"] = 5,
                ["6"] = 6,
                ["7"] = 7,
                ["8"] = 8,
                ["9"] = 9,
                ["10"] = 10,
                ["J"] = 11,
                ["Q"] = 12,
                ["K"] = 13,
                ["A"] = 14
            };
            List<int> rank = hand
                .Select(x => rankValues[x.Substring(0, x.Length - 1)])
                .OrderByDescending(x => x).ToList();
            List<int> frequencies = rank.Select(x => rank.Count(y => x == y)).ToList();
            bool suitFrequency = hand.Select(x => x[x.Length - 1]).Distinct().Count() == 1;
            bool rankOrder = Enumerable.Range(1, 4).All(x => rank[x] + 1 == rank[x - 1]);

            if (suitFrequency && rankOrder && rank[0] == 14) Console.WriteLine("Royal Flush");
            else if (suitFrequency && rankOrder) Console.WriteLine("Straight Flush");
            else if (frequencies[0] == 4 || frequencies[4] == 4) Console.WriteLine("Four of a Kind");
            else if (new HashSet<int> { 2, 3 }
            .SetEquals(new List<int> { frequencies[4], frequencies[0] }))
                Console.WriteLine("Full House");
            else if (suitFrequency) Console.WriteLine("Flush");
            else if (rankOrder) Console.WriteLine("Straight");
            else if (frequencies[2] == 3) Console.WriteLine("Three of a Kind");
            else if (frequencies[1] == 2 && frequencies[3] == 2) Console.WriteLine("Two Pairs");
            else if (rank.Distinct().Where(x => rank.Count(y => y == x) == 2).Count() == 1)
                Console.WriteLine("One Pair");
            else Console.WriteLine("High Card");
        }
    }
}