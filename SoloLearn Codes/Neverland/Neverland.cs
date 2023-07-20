using System;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int age = Convert.ToInt32(Console.ReadLine());
            int year = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("My twin is " + (age + year) + " years old and they are " + year + " years older than me");
        }
    }
}
