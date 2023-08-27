using System;
using System.Collections.Generic;

namespace SoloLearn
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] ps = Console.ReadLine().Trim().Split(',');
            List<(int, int)> M = new List<(int, int)>();
            for (int i = 0; i < ps.Length; i++)
                for (int j = 0; j < ps[i].Length; j++) if (ps[i][j] == 'P') M.Add((i, j));
            Console.WriteLine(Math.Abs(M[0].Item1 - M[1].Item1) + Math.Abs(M[0].Item2 - M[1].Item2));
        }
    }
}