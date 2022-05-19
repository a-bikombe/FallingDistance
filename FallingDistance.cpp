/*
Student Name: Arianna Bikombe
Date: March 25, 2021
Course: CSCI175N
Lab Assignment: Lab06-01FallingDistance
Project Name: Falling Distance
File Name: Lab06-01FallingDistance
Description: Tests a falling Distance Function
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Constant for gravity: 9.8 meters per second squared
const double G = 9.8;

// Function prototype
void myName();
double fallingDistance(int);

int main()
{
    myName();
    cout << "This program tests a falling ";
    cout << "Distance Function." << endl << endl;

    // Display the table headings.
    cout << "Seconds\t\tDistance\n";
    cout << "=============================\n";

    // Set the numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;

    // Display the table data.
    for (int seconds = 1; seconds <= 10; seconds++)
    {
        // Display the seconds and distance.
        cout << setw(2) << right << seconds << "\t\t"
            << setw(6) << right
            << fallingDistance(seconds)
            << " meters\n";
    }
    cout << "\n";
    system("pause");

    return 0;
}

//*************************************************
// The fallingDistance function returns the       *
// distance that a falling object falls. The time *
// parameter is the number of seconds the object  *
// fell.                                          *
//*************************************************

double fallingDistance(int seconds) {

    // Local variable declarations placed here
    double distance;

    // Program output
    distance = 0.5 * (G * (seconds * seconds));

    return distance;
}


//*************************************************
// The myName function outputs my name, course, & *
// Program #, and a blank line as typical for all *
// programs.                                      *
//*************************************************

void myName() {

    // Print out your name and course
    cout << "Arianna Bikombe\n";
    cout << "CSCI175N\n";
    cout << "Lab06_01 Falling Distance\n" << endl;

}

/*

test 1

Arianna Bikombe
CSCI175N
Lab06_01 Falling Distance

This program tests a falling Distance Function.

Seconds         Distance
=============================
 1                4.90 meters
 2               19.60 meters
 3               44.10 meters
 4               78.40 meters
 5              122.50 meters
 6              176.40 meters
 7              240.10 meters
 8              313.60 meters
 9              396.90 meters
10              490.00 meters

Press any key to continue . . .

*/