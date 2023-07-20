using System;


namespace Sololearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int hover = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(hover < 7 ? "Loss" : (hover == 7 ? "Broke Even" : "Profit"));
        }
    }
}
