using System;
using System.Data;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            string[] s = Console.ReadLine().Split();
            string r = "none";
            for (int i = 0; i < s.Length; i++)
            {
                if (n == Convert.ToInt32(new DataTable().Compute(s[i], null)))
                {
                    r = $"index {i}";
                    break;
                }
            }
            Console.WriteLine(r);
        }
    }
}