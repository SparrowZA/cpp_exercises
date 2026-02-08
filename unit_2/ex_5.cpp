#include <iostream>


int main(){
    using namespace std;

    // Initialise variables
    float temperature;

    // Calculations
    cout << "|  'C\t |  'F\t|" << endl;
    // Note here we don't use i++ because we want to increment by 10 instead of 1
    for(int i = 0; i <= 100; i = i + 10){
        temperature = (i * 9.0 / 5.0) + 32;
        // The "\t" is used to add a tab space between the columns for better formatting
        cout << "| " << i << "\t | " << temperature << "\t|" << endl;
    }

    // Output
    return 0;
}