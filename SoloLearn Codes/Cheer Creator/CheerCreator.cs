using System;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int yard = Convert.ToInt32(Console.ReadLine());
            if (yard < 1) Console.WriteLine("shh");
            else if (yard > 10) Console.WriteLine("High Five");
            else for(int i = 1; i <= yard; i++) Console.WriteLine("Ra!");
        }
    }
}
