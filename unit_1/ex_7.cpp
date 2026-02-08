/*
    * Exercise 7: Write a program that converts a temperature in degrees Fahrenheit to
    * degrees Celsius. 
    * The formula is C = (F - 32) * 5 / 9, where F is the temperature in degrees
    * Fahrenheit and C is the temperature in degrees Celsius.
    *
*/
#include <iostream>

int main(){
    using namespace std;

    // Setup variables being used
    float tempF, tempC;
    const float multiplier = 5.0 / 9.0;

    // User input
    cout << "Please enter the temperature in degrees Fahrenheit: ";
    cin >> tempF;

    // Calculations
    // You don't have to use a const variable for this
    tempC = (tempF - 32) * multiplier;
    // Don't forget the .0 to otherwise the compiler will assume the values are integers
    tempC = (tempF - 32) * (5.0/9.0);


    // Output
    cout << "The temperature " << tempF << "'F in Celsius is " << tempC << "'C" << endl;
    return 0;
}