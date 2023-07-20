using System;
using System.Collections.Generic;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            var d = new Dictionary<string, string>() {
                {"Grr", "Lion"}, {"Rawr", "Tiger"},  {"Ssss", "Snake"}, {"Chirp", "Bird"}
            };
            string[] ns = Console.ReadLine().Split();
            foreach (string n in ns) Console.Write(d[n] + ' ');
        }
    }
}
