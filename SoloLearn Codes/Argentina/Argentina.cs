using System;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int peso = Convert.ToInt32(Console.ReadLine());
            int dollar = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(peso < dollar * 50 ? "Pesos" : "Dollars");
        }
    }
}

