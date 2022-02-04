/*Ariel Flores

ITSE-1307 2801 8W1 Introduction to C++

1/30/22

Chapter 2 - Physics Formulas*/


#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    //1.Variable - Fields in a datebase
    double mass = 0.0;
    double velocity = 0.0;
    double kineticEnergy = 0.0;
    
    double acceleration = 0.0;
    double height = 0.0;
    double potentialEnergy = 0.0;

    //2. Talking to user to enter Mass, Velocity, Energy
    cout << "Welcome to Kinetic Energy Calcualtor\n" << endl;
    cout << " ========================================" << endl;
    cout << "Please enter the Mass: " << endl;

    //3 Store the answer for Mass
    cin >> mass;
    
    //2b Talking to user enter velocity
    cout << "Please enter Velocity: " << endl;

    //3b store the answer for Velocity
    cin >> velocity;

    //4. Calculations: kinetic energy
    kineticEnergy = .50 * mass * pow(velocity, 2);

    //5. Display Kinetic Energy
    cout << "\nKinetic Energy = " << kineticEnergy << endl;

    cout << "Potential Energy Calculator\n";
    cout << "=========================================" << endl;

     //2c Talking to user enter acceleration
    cout << "Please enter Acceleration: " << endl;

    //3c store the answer for Acceleration
    cin >> acceleration;

    //2d talking ot user enter height
    cout << "Please enter the Height: " << endl;

    //3d store the answer for height
    cin >> height;





    //5. Calculations: for potential energy.
    potentialEnergy = acceleration * mass * height;
    
    //5b. Display Potential Energy
    cout << "\nPotential Energy = " << potentialEnergy << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
