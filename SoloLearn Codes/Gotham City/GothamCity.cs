using System;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int crim = Convert.ToInt32(Console.ReadLine());
            if (crim < 5) Console.WriteLine("I got this!");
            else if (crim >= 5 && crim <= 10) Console.WriteLine("Help me Batman");
            else Console.WriteLine("Good Luck out there!");
        }
    }
}
