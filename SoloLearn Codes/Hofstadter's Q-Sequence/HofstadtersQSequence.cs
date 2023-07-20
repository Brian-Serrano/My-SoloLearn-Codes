using System;

namespace SoloLearn
{
    class Program
    {
        static int[] t = new int[10000];

        static int q(int n)
        {
            if (n > 2)
            {
                if (t[n] == 0) t[n] = q(n - q(n - 1)) + q(n - q(n - 2));
                return t[n];
            }
            else return 1;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(q(Convert.ToInt32(Console.ReadLine())));
        }
    }
}