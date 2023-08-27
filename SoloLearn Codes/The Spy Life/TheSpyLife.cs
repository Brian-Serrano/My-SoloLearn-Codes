using System;
using System.Linq;
using System.Text.RegularExpressions;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(string.Join("", Regex.Replace(Console.ReadLine(), "[^a-zA-Z\\s]", "").Reverse()));
        }
    }
}