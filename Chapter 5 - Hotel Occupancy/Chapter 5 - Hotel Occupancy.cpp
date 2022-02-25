// Chapter 5 - Hotel Occupancy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int x = 10;
    int y = 9;
    int hotel = 0;
    int floors = 0;
    int rooms = 0;
    int rooms2 = 0;
    int totalRooms = 0;
    int unoccupied = 0;
    double occupancyRate = 0;
    ++x;
    x++;


    cout << "How many floors does the hotel have? " << endl;
    cin >> hotel;

    int lvl = 1;
    
    for ()
    {
        while (lvl < hotel)
        {
            cout << "How may rooms does level " << lvl << " have? " << endl;

            cin >> rooms;
            lvl++;
        }
    }
    int counter = 1;
    
    for ()
    {
        while (counter < hotel) //loop 5 time 0 < 5 = true
        {
            cout << "How many rooms are occupied on level " << counter << endl;

            cin >> rooms2;
            counter++;

        }
    }
    
    //Calculations
    unoccupied = rooms - rooms2
    totalRooms = rooms + rooms2;
    occupancyRate = 
    //display
    cout << "==================================" << endl;
    cout << "Total number of rooms occupied: " << rooms2 << endl;
    cout << "Total number of rooms unoccupied: " << rooms << endl;
    cout << "Total number of rooms in the hotel: " << totalRooms << endl;
    cout << "Percent of rooms occupied: " << endl;
    cout << "==================================" << endl;

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
