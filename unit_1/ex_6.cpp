/*
    * Exercise 6: Sum of the First n Positive Integers
    * 
    * Write a program that calculates the sum of the first n positive
    * integers, where n is entered by the user. The formula for calculating the sum of
    * the first n positive integers is:
    * sum = (n * (n + 1)) / 2.
    *
*/
#include <iostream>

int main(){
    using namespace std;
    
    // Setup variables being used
    int number, total;

    // User input
    cout << "Please enter a postive integer: ";
    cin >> number;

    // Calculations
    total = (number * (number + 1)) / 2;

    // Output
    cout << "The sum of the positive integer entered is: " << total << endl;
    return 0;
}