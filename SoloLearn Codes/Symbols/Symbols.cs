using System;
using System.Text.RegularExpressions;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Regex.Replace(Console.ReadLine(), "[^a-zA-Z0-9\\s]", ""));
        }
    }
}