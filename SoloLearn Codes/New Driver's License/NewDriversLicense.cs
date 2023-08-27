using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string n = Console.ReadLine();
            int a = int.Parse(Console.ReadLine());
            int pos = Console.ReadLine().Split(' ').Where(x => string.Compare(x, n) < 0).Count();
            Console.WriteLine(20 * (pos / a + 1));
        }
    }
}