using System;
using System.Collections.Generic;
namespace Week_5
{
    class Program
    {
        static void Main(string[] args)
        {
            //ProblemOne();
            ProblemTwo();


        }
        static void ProblemOne()
        {
            string input = "";
            List<Person> friend = new List<Person>();
            bool continueLoop = true;

            do
            {
                Console.WriteLine("Enter name and type 'OK' to quit.");
                input = Console.ReadLine();

                if (input == "OK")
                {
                    continueLoop = false;
                }
                else 
                {
                    Person p = new Person(input);
                    friend.Add(p);
                }

            }
            while (continueLoop);

            if (friend.Count == 0)
            {
                Console.WriteLine("No one likes your post");
            }

            if (friend.Count == 1)
            {
                Console.WriteLine(friend[0].Name + " likes your post");
            }
            if (friend.Count == 2)
            {
                Console.WriteLine(friend[0].Name + ","+friend[1].Name+" likes your post");
            }
            if (friend.Count > 3)
            {
                Console.WriteLine(friend[0].Name +","+ friend[1].Name+ " and " + friend.Count + " likes your post");
            }



        }
        class Person
        {
            string name = "";
            public Person(string name)
            {
                this.name = name;
            }

            public string Name
            {
                get { return name; }
                set { name = value; }
            }
        }
        static void ProblemTwo()
        {
            Dictionary<string, string> IDs = new Dictionary<string, string>();

            string userInput = "";


            do
            {
                Console.WriteLine("Enter a sentence 'The Cake is a lie': ");
                userInput = Console.ReadLine();

                string[] pieces = userInput.Split(' ');

                if (pieces.Length == 2)
                {
                    string tempKey = pieces[0];
                    string tempValue = pieces[1] + " ";

                    if (IDs.ContainsKey(tempKey))
                    {
                        Console.WriteLine("This ID is already in");
                    }
                    else
                    {
                        IDs.Add(tempKey, tempValue);
                    }
                }
            } while (userInput != "OK");

                foreach (KeyValuePair<string, string> kvp in IDs)
                {
                    Console.WriteLine(kvp.Key + " | " + kvp.Value);
                    
                }
            
        }
    }


}