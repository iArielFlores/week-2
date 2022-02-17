using System;
namespace Week_3
{
    class Program
    {

        static void Main(string[] args)
        {
            //0. objects
            Car car1 = new Car();


            Car car2 = new Car();


            Car car3 = new Car();


            //1.Variable - Fields in a datebase

            int speedLimit = 40;
            string make1 = "";
            string make2 = "";
            string make3 = "";
            string model1 = "";
            string model2 = "";
            string model3 = "";
            int difference = 0;
            int demerits = 0;

            int mph1 = 0;
            int mph2 = 0;
            int mph3 = 0;

            //2. Talking to user what model and speed
            //car 1
            Console.WriteLine("Enter the make1");

            make1 = Console.ReadLine();
            car1.setmake(make1);

            Console.WriteLine("Enter what model1 ");

            model1 = Console.ReadLine();
            car1.setmodel(model1);

            Console.WriteLine("Enter what speed1 ");
            string s = Console.ReadLine();
            mph1 = int.Parse(s);
            car1.setspeed(mph1);
            

            //car 2
            Console.WriteLine("Enter Car make2");
            make2 = Console.ReadLine();

            car2.setmake(make2);
            

            Console.WriteLine("Enter what model2 ");
            model2 = Console.ReadLine();

            car2.setmodel(model2);

            Console.WriteLine("Enter what speed2 ");
            string a = Console.ReadLine();
            mph2 = int.Parse(a);
            car2.setspeed(mph2);

            //car 3
            Console.WriteLine("Enter Car make3");
            make3 = Console.ReadLine();
            car3.setmake(make3);

            Console.WriteLine("Enter what model3 ");

            model3 = Console.ReadLine();
            car3.setmodel(model3);

            Console.WriteLine("Enter what speed3 ");
            string d = Console.ReadLine();
            mph3 = int.Parse(d);
            car3.setspeed(mph3);

            //display
            Console.WriteLine("==========================================\n");
            Console.WriteLine("Speed Limit: " + speedLimit + "mph " + "\n \n");


            Console.WriteLine("==========================================");
            if (car1.getspeed() > speedLimit)
            /////////////////////////////////////////
            // should be if car1.speed > speedLimit
            /////////////////////////////////////////
            {
                difference = car1.getspeed() - speedLimit; // car1.speed - speedlimit
                demerits = difference / 5;

                
                Console.WriteLine(car1.getmake() + " " + car1.getmodel() + ": " + car1.getspeed() + "mph" + " you received " + demerits + " demerits!" + ": OK");

                if (demerits > 10)
                {
                    Console.WriteLine(car1.getmake() + " " + car1.getmodel() + ": " + car1.getspeed() + "mph" + "you received " + demerits + " demerits!" + ": <LICENSE SUSPENDED>"); // make sure to use car1.make, etc., here
                }
            }

            else
            {
                Console.WriteLine(car1.getmake() + " " + car1.getmodel() + ": " + "mph" + ": OK");// move this below
            }



            if (car2.getspeed() > speedLimit)
            {
                difference = car2.getspeed() - speedLimit; // car1.speed - speedlimit
                demerits = difference / 5;


                Console.WriteLine(car2.getmake() + " " + car2.getmodel() + ": " + car2.getspeed() + "mph" + " you received " + demerits + " demerits!" + ": OK");

                if (demerits > 10)
                {
                    Console.WriteLine(car2.getmake() + " " + car2.getmodel() + ": " + car2.getspeed() + "mph" + "you received " + demerits + " demerits!" + ": <LICENSE SUSPENDED>"); // make sure to use car1.make, etc., here
                }
            }

            else
            {
                Console.WriteLine(car2.getmake() + " " + car2.getmodel() + ": " + "mph" + ": OK");// move this below
            }

            if (car3.getspeed() > speedLimit)
            {
                difference = car3.getspeed() - speedLimit; // car1.speed - speedlimit
                demerits = difference / 5;


                Console.WriteLine(car3.getmake() + " " + car3.getmodel() + ": " + car3.getspeed() + "mph" + " you received " + demerits + " demerits!" + ": OK");

                if (demerits > 10)
                {
                    Console.WriteLine(car3.getmake() + " " + car3.getmodel() + ": " + car3.getspeed() + "mph" + "you received " + demerits + " demerits!" + ": <LICENSE SUSPENDED>"); // make sure to use car1.make, etc., here
                }
            }

            else
            {
                Console.WriteLine(car3.getmake() + " " + car3.getmodel() + ": " + "mph" + ": OK");// move this below
            }
            Console.WriteLine("==========================================");




        }
    }
    class Car
    {

        private string make;
        private string model;
        private int speed;


        public string getmake()
        {
            return make;
        }

        public void setmake(string ma)
        {
            make = ma;
        }

        public string getmodel()
        {
            return model;
        }

        public void setmodel(string mo)
        {
            model = mo;
        }

        public int getspeed()
        {
            return speed;
        }

        public void setspeed(int sp)
        {
            speed = sp;
        }


    }

}
