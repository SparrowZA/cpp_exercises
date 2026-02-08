/*
    * Exercise 2: Bank Notes
    * Write a program that asks the user to enter the value of a bank note and then
    * outputs the name of the president on the bank note. The program should support
    * the following bank notes: $1, $2, $5, $10, $20, $50, and $100. If the user enters
    * a value that is not one of these, the program should output that the bank note
    * is not valid.
*/
#include <iostream>


int main(){
    using namespace std;

    // Initialise variables
    int money;

    // User input
    cout << "Enter the value of the bank note: ";
    cin >> money;

    // Output the letter
    // Here we are using a switch statement to check if the bank note is valid
    switch(money){
        case 1:
            cout << "The president on the bank note is George Washington." << endl;
            break;
        case 2:
            cout << "The president on the bank note is Thomas Jefferson." << endl;
            break;
        case 5:
            cout << "The president on the bank note is Abraham Licoln." << endl;
            break;
        case 10:
            cout << "The president on the bank note is alexander Hamilton." << endl;
            break;
        case 20:
            cout << "The president on the bank note is Andrew Jackson." << endl;
            break;
        case 50:
            cout << "The president on the bank note is Ulysses S. Grant." << endl;
            break;
        case 100:
            cout << "The president on the bank note is Benjamin Franklin." << endl;
            break;
        default:
            cout << "The bank note is not valid." << endl;
    }

    // Using if statements to check if the bank note is valid
    if(money == 1){
        cout << "The president on the bank note is George Washington." << endl;
    }
    else if(money == 2){
        cout << "The president on the bank note is Thomas Jefferson." << endl;
    }
    else if(money == 5){
        cout << "The president on the bank note is Abraham Licoln." << endl;
    }
    else if(money == 10){
        cout << "The president on the bank note is alexander Hamilton." << endl;
    }
    else if(money == 20){
        cout << "The president on the bank note is Andrew Jackson." << endl;
    }
    else if(money == 50){
        cout << "The president on the bank note is Ulysses S. Grant." << endl;
    }
    else if(money == 100){
        cout << "The president on the bank note is Benjamin Franklin." << endl;
    }
    else {
        cout << "The bank note is not valid." << endl;
    }
    return 0;
}