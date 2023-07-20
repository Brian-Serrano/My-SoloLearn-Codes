using System;
using System.Linq;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(string
                .Join(" ", Array.ConvertAll(Console.ReadLine().Split(), int.Parse)
                .Where(x => x % 2 == 0).ToArray()));
        }
    }
}
