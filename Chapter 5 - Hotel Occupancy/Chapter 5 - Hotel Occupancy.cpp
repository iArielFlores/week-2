/*Ariel Flors

ITSE- 1307 2801

2/25/22

Chapter 5 - Hotel Occupancy */

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    //1.Variable // attributes //instance fields // data memebers
    int floors;
    double rooms = 0;
    int roomsOccupied = 0;
    double totalRooms = 0;
    double totalRoomsOccupied = 0;
    int occupancy = 0;
    double occupancyRate = 0.0;;
    

    //talking to user how many floors
    cout << "How many floors does the hotel have? " << endl;
    cin >> floors;


    // input validation: floor count > 1
    while (floors < 1)
    {
        cout << "Error! Enter a number of floors: ";
        cin >> floors;
    }

    
    for (int i = 1; i <= floors; i++)
    {
        //talking to user  of number of rooms and occupancy
        cout << "How many rooms are on floor " << i << ": ";
        cin >> rooms;
        cout << "How many rooms or occupied " << i << ": ";
        cin >> occupancy;

        totalRooms = totalRooms + rooms;
        totalRoomsOccupied = totalRoomsOccupied + occupancy;
    }

    //comput the occupancy rate
    occupancyRate = 100*  (totalRoomsOccupied / totalRooms);
    
    //display
   
    cout << "================================= \n";
    cout << "totalRoomsOccupied " << totalRoomsOccupied << endl;
    cout << "totalRooms " << totalRooms << endl;
    cout << "occupancyRate " << occupancyRate << "\n" << endl;
    cout << "=================================";
    

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
