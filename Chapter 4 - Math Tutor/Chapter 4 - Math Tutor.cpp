/*Ariel Flores

ITSE-1307 2801 8W1 Introduction to C++

2/13/22

Chapter 4 - Physics Math Tutor*/

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    //1.Variable // attributes //instance fields // data memebers
    int randomNum1, randomNum2;
    int cpAnswer = 0, userAnswer = 0;
    int choice;
    
    //2. crating random number
    srand(time(NULL));
    randomNum1 = rand() % 999 + 1; // between 1 and 999
    randomNum2 = rand() % 999 + 1; // between 1 and 999 

    
    //3. Talk to the user to choose from menu
    cout << "Please choose!" << endl;
    cout << "====================" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Quit" << endl;
    cout << "====================" << endl;
    cin >> choice;
    
    //4. Calucaltions/ Logic 5.Display
    if (choice == 1)
    {
        cout << randomNum1 << " + " << randomNum2 << " = ?" << endl;
        cpAnswer = randomNum1 + randomNum2;

        cin >> userAnswer;
    }
    

    else if (choice == 2)
    {
        cout << randomNum1 << " - " << randomNum2 << " = ?" << endl;
        cpAnswer = randomNum1 - randomNum2;

        cin >> userAnswer;
    }
    else if (choice == 3)
    {
        cout << randomNum1 << " * " << randomNum2 << " = ?" << endl;
        cpAnswer = randomNum1 * randomNum2;

        cin >> userAnswer;
    }
    else if (choice == 4)
    {
        cout << randomNum1 << " / " << randomNum2 << " = ?" << endl;
        cpAnswer = randomNum1 / randomNum2;

        cin >> userAnswer;
    }
    else
    {
        cout << "Good Bye!" << endl;
    }

    //5. Display
    
    
    if (cpAnswer == userAnswer)
    {
    cout << "Yes! You got it right, good job!" << endl;
    }
    else
    {
    cout << "Wrong! The right answer is " << cpAnswer << endl;
    }


    
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
