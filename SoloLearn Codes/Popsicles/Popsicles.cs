using System;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int siblings = Convert.ToInt32(Console.ReadLine());
            int popsicles = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(popsicles % siblings == 0 ? "give away" : "eat them yourself");
        }
    }
}