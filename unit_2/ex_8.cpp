/*
* Exercise 8: Hypotenuse Calculator
*
* Write a program that calculates the length of the hypotenuse of a right triangle
* given the lengths of the other two sides. The program should prompt the user to enter
* the lengths of the two sides,
*
*/
#include <iostream>


float calcHypotenuse(int side1, int side2);
// Calculate the length of the hypotenuse using Pythagorean theorem

float calcHypotenuseRef(int& side1, int& side2);
// Calculate the length of the hypotenuse using Pythagorean theorem, with reference parameters

int main(){
    using namespace std;

    // Initialise variables
    int side1, side2;
    float hypotenuse, hypotenuse2;

    // User input
    cout << "Enter the length of the two sides of the triangle: ";
    cin >> side1 >> side2;

    // Calculation
    hypotenuse = calcHypotenuse(side1, side2);
    // calculate the hypotenuse using reference parameters;
    hypotenuse2 = calcHypotenuseRef(side1, side2);

    // Output
    cout << "The length of the hypotenuse is: " << hypotenuse << endl;
    cout << "The length of the hypotenuse is: " << hypotenuse2 << endl;
    return 0;
}

float calcHypotenuse(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

float calcHypotenuseRef(int& side1, int& side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}