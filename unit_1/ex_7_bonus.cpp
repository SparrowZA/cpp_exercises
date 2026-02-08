/*
    * Exercise 7 (Bonus): Temperature Converter
    *
    * Write a program that converts temperatures between Celsius and Fahrenheit. The
    * user should be able to input a temperature and specify whether it is in Celsius or
    * Fahrenheit, and the program should output the converted temperature.
    *
    * The formulas for conversion are:
    * - To convert from Celsius to Fahrenheit: F = (C * 9/5) + 32
    * - To convert from Fahrenheit to Celsius: C = (F - 32) * 5/9
    *
    * Make sure to handle user input properly and provide clear instructions for the user.
    *
*/
#include <iostream>

int main(){
    using namespace std;

    // Setup variables being used
    float inputTemperature, convertedTemperature;
    const float multiplier = 5.0 / 9.0;
    char tempSelector;

    // User input
    cout << "Are you entering the temperature in Celius or Fahrenheit (C/F): ";
    cin >> tempSelector;

    cout << "Please enter the temperature: ";
    cin >> inputTemperature;

    // NOTE: be aware of the single quotes around the character "" and '' are not the
    // same in C++
    if(tempSelector == 'C'){
        // Calculations
        convertedTemperature = (inputTemperature * 9.0 / 5.0) + 32;

        // Output
        cout << "The temperature " << inputTemperature << "'C in Fahrenheit is " << convertedTemperature << "'F" << endl;
    }
    else if(tempSelector == 'F'){
        // Calculations
        // You don't have to use a const variable for this
        convertedTemperature = (inputTemperature - 32) * multiplier;
        // Don't forget the .0 to otherwise the compiler will assume the values are integers
        convertedTemperature = (inputTemperature - 32) * (5.0/9.0);

        // Output
        cout << "The temperature " << inputTemperature << "'F in Celsius is " << convertedTemperature << "'C" << endl;
    }
    else{
        // If neither C nor F were selected let the user know of their incorrect selection
        cout << "C or F was not selected. Please try again...";
        return 1;
    }
    return 0;
}