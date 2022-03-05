/*Ariel Flors

ITSE- 1307 2801

2/27/22

Chapter 6 - Number Analysis Program */

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

//Function prototypes
void readNumbers(ifstream&, int[], int);
int getLowest(int[], int);
int getHightest(int[], int);
int getSum(int[], int);
double getAverage(int[], int);


int main()
{
    //0. Constants
    int const ARRAY_SIZE = 4;




    //1. Declaring our arrays
    ifstream inFile;
    //string filename;
    int numbers[ARRAY_SIZE];
    int sum = 0;
    double avg;
    
    
    inFile.open("number.txt");

    if (!inFile)
    {
        cout << "Error opening the file \n";
        return 0;
    }

    readNumbers(inFile, numbers, ARRAY_SIZE);


    inFile.close();

    //Display data about the number
    cout << "The Highest value is: "
         << getHightest(numbers, ARRAY_SIZE)
         << endl;

    cout << "The lowest value is: "
         << getLowest(numbers, ARRAY_SIZE)
         << endl;
    
    cout << "The Sum value is: "
        << getSum(numbers, ARRAY_SIZE)
        << endl;

    cout << "The Average of the numbers is: "
        << getAverage(numbers, ARRAY_SIZE)
        << endl;



}
void readNumbers(ifstream& inFile, int numbers[], int size)
{
    for (int i = 0; i < size; i++)
        inFile >> numbers[i];
}
int getLowest(int values[], int size)
{
    int lowest = values[0];

    for (int i = 1; i < size; i++)
    {
        if (values[i] < lowest)
            lowest = values[i];
    }
    return lowest;
}

int getHightest(int values[], int size)
{
    int hightest = values[0];

    for (int i = 1; i < size; i++)
    {
        if (values[i] < hightest)
            hightest = values[i];
    }
    return hightest;
}
int getSum(int values[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += values[i];

    return sum;
}
double getAverage(int values[], int size)
{
    return getSum(values, size) / static_cast<double>(size);
}
