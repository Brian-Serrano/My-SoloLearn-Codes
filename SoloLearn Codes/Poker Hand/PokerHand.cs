using System;
using System.Collections.Generic;
using System.Linq;


namespace SoloLearn
{
    class Program
    {
        static void cw(string p) { Console.WriteLine(p); }

        static void Main(string[] args)
        {
            string s = Console.ReadLine();

            s = s.Replace("2", "02").Replace("3", "03").Replace("4", "04").Replace("5", "05")
                .Replace("6", "06").Replace("7", "07").Replace("8", "08").Replace("9", "09")
                .Replace("J", "11").Replace("Q", "12").Replace("K", "13").Replace("A", "14");

            string[] vs = { "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14" };

            List<int> hV = new List<int>();
            foreach (string v in vs)
            {
                int nV = s.Length - s.Replace(v, "").Length;
                if (nV != 0) hV.Add(Convert.ToInt32(nV / 2));
            }

            string[] suits = { "H", "S", "C", "D" };
            bool suited = false;
            foreach (string su in suits)
            {
                int nSu = s.Length - s.Replace(su, "").Length;
                if (nSu == 5)
                {
                    suited = true;
                    break;
                }
            }

            string[] wos = s.Replace("H", "").Replace("C", "").Replace("S", "").Replace("D", "").Split();
            int[] wosInts = wos.Select(int.Parse).ToArray();

            int sm = wosInts.Sum();
            int mn = wosInts.Min();
            int mx = wosInts.Max();
            int ln = hV.Count;

            if (hV.Contains(2) && ln == 4) { cw("One Pair"); }
            else if (hV.Contains(2) && ln == 3) { cw("Two Pairs"); }
            else if (hV.Contains(3) && ln == 3) { cw("Three of a Kind"); }
            else if (hV.Contains(3) && ln == 2) { cw("Full House"); }
            else if (hV.Contains(4) && ln == 2) { cw("Four of a Kind"); }
            else if (suited && mx - mn == 4 && mx == 14 && ln == 5) { cw("Royal Flush"); }
            else if (suited && mx - mn == 4 && ln == 5) { cw("Straight Flush"); }
            else if (suited && mx - mn == 12 && mx == 14 && sm == 28 && ln == 5) { cw("Straight Flush"); }
            else if (mx - mn == 12 && mx == 14 && sm == 28 && ln == 5) { cw("Straight"); }
            else if (mx - mn == 4 && ln == 5) { cw("Straight"); }
            else if (suited) { cw("Flush"); }
            else if (!hV.Contains(2) && !hV.Contains(3) && !hV.Contains(4) && mx - mn != 4) { cw("High Card"); }
        }
    }
}