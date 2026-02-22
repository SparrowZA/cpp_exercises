#include <iostream>
#include <string>


std::string getCapitalized(const std::string& userStr);

int main(){
    using namespace std;

    // Initialise variables
    string userStr, capitalized;

    // User input
    cout << "Please enter a string: ";
    getline(cin, userStr);

    // Calculations
    capitalized = getCapitalized(userStr);

    // Output
    cout << "Original string\n" << userStr;
    cout << "\nNew string\n" << capitalized;
    return 0;
}

std::string getCapitalized(const std::string& userStr){
    std::string newStr = userStr;
    int length = userStr.length();
    newStr[0] = std::toupper(newStr[0]);
    newStr[length - 1] = std::toupper(newStr[length - 1]);
    return newStr;
}