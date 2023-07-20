using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int year, month, day;
            string[] a, aa;
            int[] n;
            string s = Console.ReadLine();

            if (char.IsLetter(s[0]))
            {
                a = s.Split(',');
                aa = a[0].Split(' ');
                year = Convert.ToInt32(a[1]);
                month = DateTime.Parse("1," + aa[0] + " 2020").Month;
                day = Convert.ToInt32(aa[1]);
            }
            else
            {
                a = s.Split('/');
                n = Array.ConvertAll(a, int.Parse);
                year = n[2];
                month = n[0];
                day = n[1];
            }

            Console.WriteLine(new DateTime(year, month, day).ToString("dddd"));
        }
    }
}