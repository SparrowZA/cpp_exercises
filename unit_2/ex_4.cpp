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