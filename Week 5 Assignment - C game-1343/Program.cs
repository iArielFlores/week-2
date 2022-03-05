using System;

namespace Week_5
{
    class Program
    {
        public static Random random;
        static void Main(string[] args)
        {

            ProblemOne();
            ProblemTwo();
            ProblemThree();





            static void ProblemOne()
        {
                int x = 1;

                while(x < 100)
                {
                    Console.WriteLine(x);
                    x++;
                }
           
            
        }

        void ProblemTwo()
        {
                string typeOK = "OK";
                string usertype = "";
            do
            {
                    Console.WriteLine("Type 'OK' to get out of here.");
                    usertype = Console.ReadLine();

            }
            while (usertype != typeOK);
                Console.WriteLine("FINANLLY! You type 'Ok' NOW GET OUT!!!!");
        }

        void ProblemThree()
        {
                int usertype = 1;

                Console.WriteLine("Enter a number");
                Console.WriteLine("================");
                string ut = Console.ReadLine();
                usertype = int.Parse(ut);
                int math = 1; 
                

                for (int x = 1; x <= usertype ; x ++)
                {
                    


                    Console.WriteLine(x);
                    
                    math = math * x;
                    

                }
                Console.WriteLine("{0}! : {1}",usertype, math);
            }


        }



        

    }

}