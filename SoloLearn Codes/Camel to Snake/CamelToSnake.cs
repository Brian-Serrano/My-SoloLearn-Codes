using System;
using System.Linq;
using System.Text.RegularExpressions;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            Console.WriteLine(Regex.Replace(string.Join("", s.Select(c => c.ToString()).Select(c => c == c.ToUpper() ? "_" + c : c).ToArray()).ToLower(), @"^_+", ""));
        }
    }
}