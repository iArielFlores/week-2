/*Ariel Flores

ITSE-1307 2801 8W1 Introduction to C++

2/28/22

Chapter 3 - Physics Class*/

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

//prototype - declare the function ahead of time
string setname();
double setMass();
double setVelocity();
double setAcceleration();
double setHeight();
double getKE(double m, double v, double v2);
double getPE(double a, double m, double h);
void display(double KE, double PE, string name);


int main()
{
    //1.Variable - Fields in a datebase
    string name = ""; //to store your name or something else
    double mass = 0.0; //to store the mass 
    double velocity = 0.0; //to store the velocity 
    double acceleration = 0.0; //to store the acceleration 
    double height = 0.0; //to store the height 
    double PE = 0.0; //to Calculations acceleration, mass, height 
    double KE = 0.0; //to Calculations mass, velocity, velocity

    //2. telling the user what work im doing and setname
    cout << "Chapter 3 - Physics Class" << endl;
    cout << "========================================" << endl;
    name = setname();
    
    //4. Talk to user to enter mass
    mass = setMass();

    //6. Talk to user to enter Velocity
    velocity = setVelocity();

    //8. Talk to user to enter acceleration
    acceleration = setAcceleration();


    //10. Talk to user to enter Height
    height = setHeight();
    

    //12. Calculations: for potential energy and Kinetic.
    
    KE = getKE(mass, velocity, velocity); //function call to get KE (Kinetic Energy)
    PE = getPE(acceleration, mass, height); // function call to getPE (Potential Energy)

    //getDisplay
    display(KE, PE, name); //Function call to display
}
/*
* display function: take TWO parmeters K: Kinetic Energy, P: Potential Energy.
* void function that will display the parmeters
*
* getKE m: Mass, v: velocity, v2: velocity
* getPE a: acceleration, m: mass, h: height
* 
*/
string setname() //Talking to user to enter their Name and store Name
{
    string name = "";
    cout << "Please enter your Name: " << endl;
    cin >> name;
    return name;
}

double setMass() //Talking to user to enter their Mass and store Mass
{
    cout << "Please enter your Mass: " << endl;
    double mass;
    cin >> mass;
    return mass;
}

double setVelocity() //Talking to user to enter their Velocity and store Velocity
{
    double velocity;
    cout << "Please enter your Velocity: " << endl;
    cin >> velocity;
    return velocity;
}

double setAcceleration() //Talking to user to enter their acceleration and store acceleration
{
    double acceleration;
    cout << "Please enter your acceleration: " << endl;
    cin >> acceleration;
    return acceleration;
}


double setHeight() //Talking to user to enter their Height and store Height
{
    double height;
    cout << "Please enter Height: " << endl;
    cin >> height;
    return height;
}


double getKE(double m, double v, double v2) //Display Calculations mass, velocity, velocity
{
    return 0.5 * m * v * v2;
}

double getPE(double a, double m, double h) //Display Calculations acceleration, mass, height
{
    return a * m * h;
}


void display(double KE, double PE, string name) //Display the answer after the calculations
{
    //13. Display
    cout << "========================================" << endl;
    cout << name << ", your Kinetic Energy amount is: "  << KE << endl;
    cout << "Your Potential Energy: " << PE << endl;
    cout << "========================================" << endl;
}