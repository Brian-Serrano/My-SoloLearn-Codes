using System;
using System.Linq;
using System.Text.RegularExpressions;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string text = Console.ReadLine();
            int count = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(string.Join("-", Regex
                .Matches(text, ".{1," + count + "}")
                .Cast<Match>().Select(x => x.Value)));
        }
    }
}