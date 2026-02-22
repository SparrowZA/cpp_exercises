#include <iostream>
#include <algorithm>

int getMedian(const int& number1, const int& number2, const int& number3);
// This returns the median value using combinational logic
int getMedianUsingMinMax(const int& number1, const int& number2, const int& number3);
// This returns the median value using the min max values 

int main(){
    using namespace std;

    // Initialise variables
    int number1 = 0, number2 = 0, number3 = 0;
    int median, median2;

    // User input
    cout << "Please enter 3 numbers seperated by a space:\n";
    cin >> number1 >> number2 >> number3;

    // Calculations
    median = getMedian(number1, number2, number3);
    median2 = getMedianUsingMinMax(number1, number2, number3);

    // Output
    cout << "The median value is " << median << endl;
    cout << "The median value is " << median2;
    return 0;
}

int getMedian(const int& number1, const int& number2, const int& number3){
    // This solution uses combinational logic
    if((number1 > number2 && number1 < number3) ||
        (number1 > number3 && number1 < number2)){
        return number1;
    }
    else if((number2 > number1 & number2 < number3) ||
            (number2 > number3 & number2 < number1)){
        return number2;
    }
    else if ((number3 > number1 & number3 < number2) ||
            (number3 > number2 & number3 < number1))
    {
        return number3;
    }
    else{
        return -1;
    }
}

int getMedianUsingMinMax(const int& number1, const int& number2, const int& number3){
    int min, max;
    // Find the minimum number
    max = std::max({number1, number2, number3});
    // Find the maximum number
    min = std::min({number1, number2, number3});
    
    return (number1 + number2 + number3) - min - max;
}
