using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] numbers = new int[Convert.ToInt32(Console.ReadLine())];
            for (int i = 0; i < numbers.Length; i++) numbers[i] = Convert.ToInt32(Console.ReadLine());
            int sum = 0;
            bool r = true;
            for (int x = 0; x < numbers.Length; x++)
            {
                if (x > 0 && numbers[x] <= sum)
                {
                    r = false;
                    break;
                }
                sum += numbers[x];
            }
            Console.WriteLine(r.ToString().ToLower());
        }
    }
}