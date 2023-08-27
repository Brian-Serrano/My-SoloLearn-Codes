using System;
using System.Text.RegularExpressions;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(new Regex("((?=.*[!@#$%&*])(?=.*[0-9]).{7,})").IsMatch(Console.ReadLine()) ? "Strong" : "Weak");
        }
    }
}