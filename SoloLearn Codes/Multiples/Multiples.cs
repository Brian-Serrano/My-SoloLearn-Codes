using System;
using System.Linq;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Enumerable.Range(0, Convert.ToInt32(Console.ReadLine())).Where(n => n % 5 == 0 || n % 3 == 0).Sum());
        }
    }
}
