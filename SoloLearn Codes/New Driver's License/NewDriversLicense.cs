using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string myName = Console.ReadLine();
            int agents = int.Parse(Console.ReadLine());
            string[] names = (myName + " " + Console.ReadLine()).Split(' ');
            Array.Sort(names);
            Console.WriteLine(20 * (Array.IndexOf(names, myName) / agents + 1));
        }
    }
}