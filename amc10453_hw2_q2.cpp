// amc10453_hw2_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num_of_quarters, num_of_dimes, num_of_nickels, num_of_pennies, cents, total_cents;
    float dollars;
    

    cout << "Please enter your amount in the format of dollars and cents seprated by a space:" << endl;

    cin >> dollars >> cents;

    dollars = static_cast<int>(dollars);    //convert float to int

    total_cents = (dollars * 100) + cents;  //converting the dollars into cents and adding with remaining cents

    num_of_quarters = total_cents / 25;     //getting the total num of quarters from total cents
    total_cents = total_cents % 25;         //getting the remainder

    num_of_dimes = total_cents / 10;        //getting the total num of dimes from total cents
    total_cents = total_cents % 10;         //getting the remainder  

    num_of_nickels = total_cents / 5;       //getting the total num of nickels from total cents
    total_cents = total_cents % 5;          //getting the remainder

    num_of_pennies = total_cents / 1;       //getting the total num of pennies from total cents
    total_cents = total_cents % 1;          //getting the remainder


    cout << dollars << " dollars and " << cents << " cents are: " << endl;
    cout << num_of_quarters << " quarters "<< num_of_dimes << " dimes " << num_of_nickels << " nickels " << num_of_pennies << " pennies " << endl;


    return 0;
}

