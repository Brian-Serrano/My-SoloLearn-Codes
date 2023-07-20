using System;


namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int height = Convert.ToInt32(Console.ReadLine());
            int width = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine((int) Math.Ceiling((double)(height * width * 2) / 10));
        }
    }
}

