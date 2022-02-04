// See https://aka.ms/new-console-template for more information
using System;
namespace Week_2
{
    class Program
    {
        static void Main(string[] args)
        {
            bool output = false;

            double myVar = 7.0;
            Console.WriteLine(-1 + 4 * myVar);
            Console.WriteLine((35 + 5) % myVar);
            Console.WriteLine(14 + -4 * 6 / 12);
            Console.WriteLine(2 + 12 / 6 * 1 - myVar % 2);

            if (myVar * myVar > 10)
            {
                

                Console.WriteLine("MyVar is 4 or greater");
            }
            else 
            {
             

                Console.WriteLine("MyVar is less than 4");
            }
        
        }
    }
}
