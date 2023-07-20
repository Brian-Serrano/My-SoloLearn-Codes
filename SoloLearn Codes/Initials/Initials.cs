using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                string[] s = Console.ReadLine().Split();
                foreach (string w in s) Console.Write(w[0]);
                Console.Write(" ");
            }
        }
    }
}