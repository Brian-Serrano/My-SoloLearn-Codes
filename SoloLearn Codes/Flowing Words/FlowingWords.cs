using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            string r = "true";
            for(int i = 0; i < s.Length - 1; i++) if (s[i][s[i].Length - 1] != s[i + 1][0]) r = "false";
            Console.WriteLine(r);
        }
    }
}