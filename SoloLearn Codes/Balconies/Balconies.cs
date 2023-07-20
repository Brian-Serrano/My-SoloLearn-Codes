using System;
using System.Linq;

namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int apartmentA = Console.ReadLine().Split(',').Select(a => int.Parse(a)).Aggregate((a, b) => a * b);
            int apartmentB = Console.ReadLine().Split(',').Select(a => int.Parse(a)).Aggregate((a, b) => a * b);
            Console.WriteLine(apartmentA > apartmentB ? "Apartment A" : "Apartment B");
        }
    }
}
