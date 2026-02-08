/*
    * Exercise 3: Earthquake Magnitude
    *
    * Write a program that takes the magnitude of an earthquake as input and classifies it according to the following scale:
    *
    * - Micro: less than 2.0
    * - Very Minor: 2.0 to less than 3.0
    * - Minor: 3.0 to less than 4.0
    * - Light: 4.0 to less than 5.0
    * - Moderate: 5.0 to less than 6.0
    * - Strong: 6.0 to less than 7.0
    * - Major: 7.0 to less than 8.0
    * - Great: 8.0 to less than 10.0
    * - Meteoric: 10.0 or greater
    *
    * The program should output the classification based on the input magnitude.
    *
*/
#include <iostream>


int main(){
    using namespace std;

    // Initialise variables
    float earthQuakeMagnitude;

    // User input
    cout << "Enter the magnitude of the earthquake: ";
    cin >> earthQuakeMagnitude;

    // Output
    // Pay attention to where the equal sign needs to go
    if(earthQuakeMagnitude < 2.0){
        cout << "The earthquake is micro." << endl;
    }
    else if(earthQuakeMagnitude >= 2.0 && earthQuakeMagnitude < 3.0){
        cout << "The earthquake is very minor." << endl;
    }
    else if(earthQuakeMagnitude >= 3.0 && earthQuakeMagnitude < 4.0){
        cout << "The earthquake is minor." << endl;
    }
    else if(earthQuakeMagnitude >= 4.0 && earthQuakeMagnitude < 5.0){
        cout << "The earthquake is light." << endl;
    }
    else if(earthQuakeMagnitude >= 5.0 && earthQuakeMagnitude < 6.0){
        cout << "The earthquake is moderate." << endl;
    }
    else if(earthQuakeMagnitude >= 6.0 && earthQuakeMagnitude < 7.0){
        cout << "The earthquake is strong." << endl;
    }
    else if(earthQuakeMagnitude >= 7.0 && earthQuakeMagnitude < 8.0){
        cout << "The earthquake is major." << endl;
    }
    else if(earthQuakeMagnitude >= 8.0 && earthQuakeMagnitude < 10.0){
        cout << "The earthquake is great." << endl;
    }
    else if(earthQuakeMagnitude >= 10.0){
        cout << "The earthquake is Meteoric!" << endl;
    }
     else{
        cout << "Invalid input." << endl;
    }
    return 0;
}