/*
    * Exercise 5: Even or Odd
    * 
    * Write a program that prompts the user to enter an integer number and then
    * determines whether the number is even or odd. 
    * An even number is an integer that is divisible by 2 without leaving a remainder,
    * while an odd number is an integer that leaves a remainder of 1 when divided by 2.
    * 
    * Expected Output:
    * Please enter an integer number: 7
    * The number you entered, 7, is ODD
*/
#include <iostream>

int main(){
    using namespace std;
    
    int number;
    cout << "Please enter an integer number: ";
    cin >> number;

    // Checking for EVEN numbers first
    if(number % 2 == 0){
        cout << "The number you entered, " << number << ", is EVEN" << endl;
    }
    else{
        cout << "The number you entered, " << number << ", is ODD" << endl;
    }

    // Checking for ODD numbers first
    if(number % 2 != 0){
        cout << "The number you entered, " << number << ", is ODD" << endl;
    }
    else{
        cout << "The number you entered, " << number << ", is EVEN" << endl;
    }
    return 0;
}