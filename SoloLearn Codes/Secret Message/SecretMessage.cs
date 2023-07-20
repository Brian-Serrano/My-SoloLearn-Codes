using System;
using System.Linq;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string alpha = string.Concat(Enumerable.Range(0, 26).Select(a => ((char)('a' + a)).ToString()));
            string rev_alpha = string.Concat(Enumerable.Range(0, 26).Select(a => ((char)('z' - a)).ToString()));
            string msg = Console.ReadLine().ToLower();
            foreach (char c in msg)
            {
                int x = alpha.IndexOf(c);
                if (x >= 0) Console.Write(rev_alpha[x]); else Console.Write(c);
            }
        }
    }
}