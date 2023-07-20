using System;
using System.Collections.Generic;

namespace SoloLearn
{
    public struct Point
    {
        public int X;
        public int Y;
    }

    class Program
    {
        static void Main(string[] args)
        {
            string[] ps = Console.ReadLine().Trim().Split(',');
            List<Point> M = new List<Point>();
            for (int i = 0; i < ps.Length; i++)
                for (int j = 0; j < ps[i].Length; j++) if (ps[i][j] == 'P') M.Add(new Point() { X = i, Y = j });
            Console.WriteLine(Math.Abs(M[0].X - M[1].X) + Math.Abs(M[0].Y - M[1].Y));
        }
    }
}