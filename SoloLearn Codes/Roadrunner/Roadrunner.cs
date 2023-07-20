using System;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int safety = Convert.ToInt32(Console.ReadLine());
            int runner = Convert.ToInt32(Console.ReadLine());
            int coyote = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(safety / runner < (safety + 50) / coyote ? "Meep Meep" : "Yum");
        }
    }
}
