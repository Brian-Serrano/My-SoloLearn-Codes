using System;
using System.Text;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < s.Length; i += 2)
            {
                for(int j = 0; j < int.Parse(s[i + 1].ToString()); j++) sb.Append(s[i]);
            }
            Console.WriteLine(sb.ToString());
        }
    }
}