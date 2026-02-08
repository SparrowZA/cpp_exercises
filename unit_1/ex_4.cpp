/*
    * Exercise 4: Calculating a Restaurant Bill
    * 
    * Expected Output:
    * Enter the cost of the food: R100.00
    * -----------------------------
    * The bill is R100.00
    * The tax is R5.00
    * The tip is R18.00
    * -------
    * The total amount due is R123.00
    * -----------------------------
*/
#include <iostream>

int main(){
    using namespace std;

    float foodcost, tax, tip, total;
    // Get the cost of the food bill
    cout << "Enter the cost of the food: R";
    cin >> foodcost;

    // Calculations
    tax = (foodcost / 100) * 5;
    tip = (foodcost / 100) * 18;
    total = foodcost + tax + tip;

    // Set output precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    // Output display
    cout << "-----------------------------" << endl;
    cout << "The bill is R" << foodcost << endl;
    cout << "The tax is R" << tax << endl;
    cout << "The tip is R" << tip << endl;
    cout << "-------" << endl;
    cout << "The total amount due is R" << total << endl;
    cout << "-----------------------------" << endl;
    return 0;
}