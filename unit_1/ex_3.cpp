/*
    * Exercise 3: Calculate the area of a rectangle
    *
    * The area of a rectangle can be calculated using the formula:
    * Area = Width * Length
    *
    * Make sure to include appropriate prompts for user input and display the result in
    * a clear format.
    *
*/
#include <iostream>

int main(){
    using namespace std;

    float width, length, area;
    cout << "Enter the width of the rectangle (m): ";
    cin >> width;
    cout << "Enter the length of the rectangle (m): ";
    cin >> length;
    area = width * length;
    cout << "The area of the rectangle is: " << area <<  "m" << endl;
    cout << "-----------------------------" << endl;

    // Doing it all in one line
    cout << "Enter the width and length of the rectangle (m): ";
    cin >> width >> length;
    area = width * length;
    cout << "The area of the rectangle is: " << area <<  "m" << endl;
    return 0;
}