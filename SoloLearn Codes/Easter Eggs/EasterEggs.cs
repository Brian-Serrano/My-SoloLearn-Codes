using System;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int total = Convert.ToInt32(Console.ReadLine());
            int me = Convert.ToInt32(Console.ReadLine());
            int friend = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(total <= me + friend ? "Candy Time" : "Keep Hunting");
        }
    }
}

