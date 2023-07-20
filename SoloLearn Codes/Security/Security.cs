using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine().Replace("x", "");
            Console.WriteLine(s.IndexOf("T$") >= 0 || s.IndexOf("$T") >= 0 ? "ALARM" : "quiet");
        }
    }
}