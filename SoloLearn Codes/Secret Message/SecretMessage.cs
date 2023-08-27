using System;
using System.Data;
using System.Linq;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(string.Join("", Console.ReadLine().ToLower()
                .Select(x => (char)(x >= 'a' && x <= 'z' ? (25 - (x - 'a')) + 'a' : x))));
        }
    }
}