using System;

namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int points = Convert.ToInt32(Console.ReadLine());
            int tickets = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(points / 12 >= tickets ? "Buy it!" : "Try again");
        }
    }
}
