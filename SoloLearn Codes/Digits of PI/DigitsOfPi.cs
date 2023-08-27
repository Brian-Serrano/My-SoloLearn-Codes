using System;
using System.Linq;
using System.Text;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = Enumerable.Repeat(2000, 3500 + 1).ToArray();
            StringBuilder sb = new StringBuilder();
            int carry = 0;
            for (int i = 3500; i > 0; i -= 14)
            {
                int sum = 0;
                for(int j = i; j > 0; j--)
                {
                    sum = sum * j + 10000 * arr[j];
                    arr[j] = sum % (j * 2 - 1);
                    sum /= j * 2 - 1;
                }
                sb.Append($"{carry + sum / 10000:D4}");
                carry = sum % 10000;
            }
            Console.WriteLine(sb.ToString()[Convert.ToInt32(Console.ReadLine())]);
        }
    }
}