using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine().ToLower();
            Console.WriteLine((str == string.Join(string.Empty, str.Distinct())).ToString().ToLower());
        }
    }
}