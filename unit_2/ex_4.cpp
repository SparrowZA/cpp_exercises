/*
    * Exercise 4: Average of a series of numbers
    *
    * Write a program that takes a series of numbers as input from the user and
    * calculates the average. The user should be able to enter as many numbers as they
    * want, and the program should stop taking input when the user enters a specific
    * sentinel value (e.g., 0). The program should then calculate and display the
    * average of the entered numbers, excluding the sentinel value.
*/
#include <iostream>


int main(){
    using namespace std;

    // Initialise variables
    int count = 0;
    float average, number;
    float total = 0;
    
    // User input
    cout << "Enter a number: ";
    cin >> number;
    while(number != 0){
        total += number;
        count++;
        cout << "Enter another number: ";
        cin >> number;
    }

    // Calculate the average
    if(count > 0){
        average = total / count;
        cout << "The average is: " << average << endl;
    }
    else{
        cout << "No numbers were entered." << endl;
    }
    average = total / count;

    // Output
    cout << "The average is: " << average << endl;
    return 0;
}