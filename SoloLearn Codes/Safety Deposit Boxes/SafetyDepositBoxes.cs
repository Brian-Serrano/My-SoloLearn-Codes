using System;

namespace SoloLearn
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] itemsInBox = Console.ReadLine().Split(',');
            string goal = Console.ReadLine();
            Console.WriteLine((Array.IndexOf(itemsInBox, goal) + 1) * 5);
        }
    }
}