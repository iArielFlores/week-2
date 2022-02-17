/*Ariel Flores

ITSE-1307 2801 8W1 Introduction to C++

2/28/22

Chapter 3 - Physics Class*/

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

class  Physics
{
private:
    //1.Variable // attributes //instance fields // data memebers
    string name = ""; //to store your name or something else
    double mass = 0.0; //to store the mass 
    double velocity = 0.0; //to store the velocity 
    double acceleration = 0.0; //to store the acceleration 
    double height = 0.0; //to store the height 
    /*
    *double PE = 0.0; //to Calculations acceleration, mass, height 
    *double KE = 0.0; //to Calculations mass, velocity, velocity
    */
public:
    //Constructor
    Physics();
    //Accessors and Muators
    string getName(); //to allow the user access their Name 
    void setName(string); //stores Name
    double getMass(); //to allow the user access their Mass 
    void setMass(double); //stores Mass
    double getVelocity(); //to allow the user access their Velocity 
    void setVelocity(double); //stores Velocity
    double getAcceleration(); //to allow the user access their Acceleration 
    void setAcceleration(double); //stores Acceleration
    double getHeight(); //to allow the user access their Height //stores Height
    void setHeight(double); //stores Height
    //Special Functions
    double calcKE();
    double calcPE();
    void display();
};

//Constructor
Physics::Physics()
{
    mass = 0.0;
    velocity = 0.0;
    acceleration = 0.0;
    height = 0.0;
}

void Physics::setName(string n)
{
    name = n;
}
/*
* getName
*/
string Physics::getName()
{
    return name;
}

/*
* getMass
*/
double Physics::getMass()
{
    return mass;
}
// setMass
void Physics::setMass(double M)
{
    mass = M;
}
// getVelocity
double Physics::getVelocity()
{
    return velocity;
}
// setVelocity
void Physics::setVelocity(double V)
{
    velocity = V;
}

// getAcceleration
double Physics::getAcceleration()
{
    return acceleration;
}
void Physics::setAcceleration(double A)
{
    acceleration = A;
}
// getHeight
double Physics::getHeight()
{
    return height;
}
// setHeight
void Physics::setHeight(double H)
{
    height = H;
}







double Physics::calcKE() //Display Calculations mass, velocity, velocity
{
    return 0.5 * mass* velocity * velocity;
}

double Physics::calcPE() //Display Calculations acceleration, mass, height
{
    return acceleration *  mass * height;
}


void Physics::display() //Display the answer after the calculations
{
    //13. Display
    cout << "========================================" << endl;
    cout << name << ", your Kinetic Energy amount is: " << calcKE() << endl;
    cout << "Your Potential Energy: " << calcPE() << endl;
    cout << "========================================" << endl;
}


int main()
{
    //0. Create a Physics Objest
    Physics user1;
    Physics user2;


    //1.Variables
    string name = ""; //to store your name or something else
    double mass = 0.0; //to store the mass 
    double velocity = 0.0; //to store the velocity 
    double acceleration = 0.0; //to store the acceleration 
    double height = 0.0; //to store the height 

    //2. Talk to user about their name and showing what im working on
    cout << "Chapter 3 - Physics Class" << endl;
    cout << "========================================" << endl;
    cout << "Please enter your Name: " << endl;
    cin >> name; // store user Name
    user1.setName(name); //store the name they typed into our database
    //user1.display();
    
    //2. Talk to the user enter Mass
    cout << "Please enter your Mass: " << endl;
    cin >> mass; // store Mass
    user1.setMass(mass); //store the mass they typed into our database
    //user1.display();
    //2. Talk to user enter Velocity
    cout << "Please enter your Velocity: " << endl;
    cin >> velocity; // store user velocity
    user1.setVelocity(velocity); 
    //user1.display();
    //2. Talk to user enter acceleration
   // user1.display();
    cout << "Please enter your acceleration: " << endl;
    cin >> acceleration; // store user acceleration
    user1.setAcceleration(acceleration);
   // user1.display();
    //2. Talk to user enter Height 

    cout << "Please enter Height: " << endl;
    cin >> height; // store user height
    user1.setHeight(height);
    user1.calcKE();
    user1.display();

}