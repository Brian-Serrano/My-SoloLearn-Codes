using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string u = Console.ReadLine();
            Console.WriteLine(u.Contains("youtu.be") ? u.Substring("https://youtu.be/".Length) : u.Substring("https://www.youtube.com/watch?v=".Length));
        }
    }
}