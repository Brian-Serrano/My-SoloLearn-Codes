using System;
using System.Linq;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] ws = Console.ReadLine().Split();
            string fw = ws[0];
            string lcs = $"{fw[0]}";

            for (int i = 0; i < fw.Length; i++)
            {
                for (int j = i + 2; j < fw.Length + 1; j++)
                {
                    string sub = fw.Substring(i, j - i);
                    if (ws.Where(x => x.Contains(sub)).Count() == ws.Length)
                    {
                        if (sub.Length > lcs.Length) lcs = sub;
                    }
                }
            }

            Console.WriteLine(lcs);
        }
    }
}