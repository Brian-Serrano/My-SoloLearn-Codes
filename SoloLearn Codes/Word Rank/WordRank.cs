using System;
using System.Collections.Generic;
using System.Linq;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] arr = input.ToCharArray().Select(c => c.ToString()).ToArray();
            List<string> sorted = new List<string>(arr);
            sorted.Sort();

            int sum = 0;
            int[] fac = new int[arr.Length];
            for (int i = 0; i < arr.Length; i++)
            {
                for (int j = 0; j < sorted.Count; j++)
                {
                    if (arr[i] == sorted[j])
                    {
                        fac[i] = j;
                        sorted.RemoveAt(j);
                        break;
                    }
                }
                sum += fac[i] * Fact(arr.Length - 1 - i) / FindCommonFact(input.Substring(i));
            }
            sum += 1;
            Console.WriteLine(sum);
        }

        static int FindCommonFact(string a)
        {
            char[] abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".ToCharArray();
            int result = 1;
            List<int> common = new List<int>();
            for (int i = 0; i < abc.Length; i++)
            {
                int count = a.Length - a.Replace(abc[i].ToString(), "").Length;
                if (count > 1) common.Add(count);
            }
            for (int i = 0; i < common.Count; i++) result *= Fact(common[i]);
            return result;
        }

        static int Fact(int n)
        {
            if (n <= 1) return 1;
            else return Fact(n -1) * n;
        }
    }
}