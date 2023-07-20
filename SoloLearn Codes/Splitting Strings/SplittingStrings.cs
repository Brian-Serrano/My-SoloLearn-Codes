using System;
using System.Text;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int n = Convert.ToInt32(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < s.Length; i++) sb.Append(i != 0 && i % n == 0 ? "-" + s[i].ToString() : s[i].ToString());
            Console.WriteLine(sb.ToString());
        }
    }
}