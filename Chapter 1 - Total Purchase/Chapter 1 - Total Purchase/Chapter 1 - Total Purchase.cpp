// Chapter 1 - Total Purchase.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ariel Flores
// ITSE-1307 2801 8W1
// 1/23/2022
// Chapter 1 - Total Purchase

#include <iostream>
using namespace std;
int main()
{
    //1.Variable
    double price1 = 0.0; //to store the price for item 1 - 5
    double price2 = 0.0;
    double price3 = 0.0;
    double price4 = 0.0;
    double price5 = 0.0;
    double sum = 0.0;
    double total = 0.0;
    double tax = 0.0;
    //2. Talking to user. Ask them for Price of item 1

    cout << "Welcome to Happy Shopphin Center\n" << endl;
    cout << "Please enter the price of the first item: " << endl;

    //3. Store the answer for item 1
    cin >> price1;

    //2b. Talking to user. Ask them for Price of item 2
    cout << "Please enter the price of the second item: " << endl;

    //3b. Store the answer for item 2
    cin >> price2;

    //2c. Talking to user. Ask them for Price of item 3
    cout << "Please enter the price of the third item: " << endl;

    //3c. Store the answer for item 3
    cin >> price3;

    //2d. Talking to user. Ask them for Price of item 4
    cout << "Please enter the price of the fourth item: " << endl;

    //3d. Store the answer for item 4
    cin >> price4;

    //2e. Talking to user. Ask them for Price of item 5
    cout << "Please enter the price of the fiffth item: " << endl;

    //3e. Store the answer for item 5
    cin >> price5;

    //4. Calculations: calculating the sum, tax, total.
    sum = price1 + price2 + price3 + price4 + price5;
    tax = sum * .07;
    total = sum + tax;

    //5. Display prices, tax, and total
    cout << "\nItem 1 = $" << price1 << endl;
    cout << "Item 2 = $" << price2 << endl;
    cout << "Item 3 = $" << price3 << endl;
    cout << "Item 4 = $" << price4 << endl;
    cout << "Item 5 = $" << price5 << endl;
    cout << "Tax = $7.00" << endl;
    cout << "total = $" << total << endl;
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
