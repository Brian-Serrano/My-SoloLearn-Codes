using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] lst = new int[Convert.ToInt32(Console.ReadLine())].Select(l => Convert.ToInt32(Console.ReadLine())).ToArray();
            Console.WriteLine(string.Join(" ", Enumerable.Range(lst.Min(), lst.Max() - lst.Min()).Where(l => !lst.Contains(l)).ToArray()));
        }
    }
}