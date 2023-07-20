using System;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            double kalei = Convert.ToDouble(Console.ReadLine());
            double price = Math.Round(kalei * 107 / 20, 2, MidpointRounding.AwayFromZero);
            Console.WriteLine(kalei > 1 ? Math.Round(price * 9 / 10, 2, MidpointRounding.AwayFromZero) : price);
        }
    }
}

