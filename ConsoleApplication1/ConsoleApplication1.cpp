// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

class Triangle
{
private:
	double length = 0.0;
	double height = 0.0;

public:	//Default Constructor
	Triangle()
	{
		double getLength();
		void setLength(double);
		double getHeight();
		void setHeight(double);
		//special funtions
		double calc();
		void display();
	}
	
};

//constructor
Triangle::Triangle()
{
	length = 0.0;
	height = 0.0;
}

void Triangle::setLength(double l)
{
	length = l;
}
double Triangle::getLength()
{
	return length;
}
void Triangle::setHeight(double h)
{
	height = h;
}
double Triangle::getHeight()
{
	return height;
}

double Triangle::calc()
{
	return lenght * height;
}

void Triangle::display()
{
	cout << "Your Length: " << length << endl;
	cout << "Your Height: " << height << endl;
	cout << "Total: " << calc << endl;
}

#include<iostream>
using namespace std;

int main()
{
	Triangle user1;

	double lenght = 0.0;
	double height = 0.0;

	//talking to user 
	cout << "enter yoru length: " << endl;
	cin >> lenght;
	user1.setLength(lenght);

	cout << "enter your height: " << endl;
	cin >> height;
	user1.setHeight(height);

	user1.calc();
	user1.display();
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
