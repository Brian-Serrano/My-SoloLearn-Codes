using System;
using System.Text.RegularExpressions;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(new Regex("^\\d{5}$").IsMatch(Console.ReadLine()) ? "true" : "false");
        }
    }
}