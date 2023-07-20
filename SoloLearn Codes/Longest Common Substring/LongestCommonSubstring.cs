using System;

namespace SoloLearn
{
    class Program
    {
        static bool isSub(string ss, string[] lst)
        {
            int c = 0;
            foreach (string w in lst) if (w.Contains(ss)) c += 1;
            return c == lst.Length;
        }

        static void Main(string[] args)
        {
            string[] ws = Console.ReadLine().Split();
            string fw = ws[0];
            string lcs = fw[0] + "";

            for (int i = 0; i < fw.Length; i++)
            {
                for (int j = i + 2; j < fw.Length + 1; j++)
                {
                    if (isSub(fw.Substring(i, j - i), ws))
                    {
                        if (fw.Substring(i, j - i).Length > lcs.Length) lcs = fw.Substring(i, j - i);
                    }
                }
            }

            Console.WriteLine(lcs);
        }
    }
}