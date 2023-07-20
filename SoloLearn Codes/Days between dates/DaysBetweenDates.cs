using System;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string dt1s = Console.ReadLine();
            string dt2s = Console.ReadLine();
            Console.WriteLine("{0:dd}", getDate(dt2s).Subtract(getDate(dt1s)));
        }

        static DateTime getDate(string dt)
        {
            string[] a = dt.Split(',');
            string[] aa = a[0].Split(' ');
            return new DateTime(Convert.ToInt32(a[1]), DateTime.Parse("1," + aa[0] + " 2020").Month, Convert.ToInt32(aa[1]));
        }
    }
}