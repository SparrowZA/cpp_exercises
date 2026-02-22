#include <iostream>


// constants
const float INITIAL_SHIPPING_COST = 10.95;
const float ADDITIONAL_COST_PER_ITEM = 2.95;

float calculateShippingCost(int numberOfItems);
// Using the number of items calculates the shipping cost of all
// the items given the values of the shipping in the constants

int main(){
    using namespace std;

    // Initialise variables
    float totalCost;
    int amountOfItems;

    // User input
    cout << "Enter the amount of items you are shipping: " << endl;
    cin >> amountOfItems;

    // Calculation
    totalCost = calculateShippingCost(amountOfItems);

    // Output
    cout << "The total cost of shipping for " << amountOfItems 
            << " items is: $" << totalCost << endl ;
    return 0;
}

float calculateShippingCost(int numberOfItems) {
    if (numberOfItems <= 0) {
        return 0.0; // No cost for zero or negative items
    }
    return INITIAL_SHIPPING_COST + (numberOfItems - 1) * ADDITIONAL_COST_PER_ITEM;
}