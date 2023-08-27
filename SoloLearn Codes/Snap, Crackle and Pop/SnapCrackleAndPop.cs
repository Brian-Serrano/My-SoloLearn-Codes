using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int i = 0; i < 6; i++)
            {
                int b = Convert.ToInt32(Console.ReadLine());
                Console.Write(b % 3 == 0 ? "Pop " : (b % 2 == 0 ? "Crackle " : "Snap "));
            }
        }
    }
}