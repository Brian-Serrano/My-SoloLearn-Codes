using System;
using System.Collections.Generic;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(FindRank(Console.ReadLine()));
        }

        public static long FindRank(string word)
        {
            long rank = 1;
            long suffixPermCount = 1;
            Dictionary<char, int> charCounts = new Dictionary<char, int>();

            for (int i = word.Length - 1; i >= 0; i--)
            {
                char x = word[i];
                int xCount = charCounts.ContainsKey(x) ? charCounts[x] + 1 : 1;

                charCounts[x] = xCount;

                foreach (KeyValuePair<char, int> e in charCounts)
                {
                    if (e.Key < x)
                    {
                        rank += suffixPermCount * e.Value / xCount;
                    }
                }

                suffixPermCount *= word.Length - i;
                suffixPermCount /= xCount;
            }

            return rank;
        }
    }
}
