using System;
namespace Week_4
{
    class Program
    {

        public static Random random;

        static void Main(string[] args)
        {

            
            random = new Random();

            int l = 0;
            int w = 0;


            GetRendomValues(out l, out w);

            Console.WriteLine("LENGTH: "+l);
            Console.WriteLine("WIDTH: "+w);

            Rectangle r = new Rectangle();
            r.width = w;
            r.length = l;

            Console.WriteLine("AREA: " + Utility.GetArea(r.length, r.width));
            Console.WriteLine("PERIMETER: " + Utility.GetPerimeter(r.length, r.width));
        }

        

        static void GetRendomValues(out int l, out int w)
        {
            l = random.Next(1, 10);
            w = random.Next(1, 10);
        }
        static int Add(int l, int w)
        {
            return l + w;
        }

    }

    class Rectangle
    {
        public int width;
        public int length;

      
    }

    class Utility
    {
        public static int GetArea(int l , int w)
        {
            return l * w;
        }
        public static int GetPerimeter(int l, int w)
        {
            return 2 * (l * w);
        }
    }
    
}
