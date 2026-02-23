#include <string>
#include <iostream>


bool isValidPassword(const std::string& password);
// Takes a string value and returns whether the password
// conforms to the correct safety standards

int main(){
    using namespace std;
    
    string password;

    cout << "Please enter the password you wish to check: ";
    getline(cin, password);

    if(isValidPassword(password)){
        cout << "This is a strong password.";
    }
    else{
        cout << "This password is not strong enough. Try again...";
    }
    return 0;
}

bool isValidPassword(const std::string& password){
    int upperCount = 0, lowerCount = 0, numberCount = 0;
    // 8 characters long
    if(password.length() < 8)
        return false;

    for(int i = 0; i < password.length(); i++){
        // Check for lowercase letters
        if(password[i] > 96 && password[i] < 123){
            lowerCount++;
        }
        // Check for uppercase letters
        if(password[i] > 64 && password[i] < 91){
            upperCount++;
        }
        // Check for numbers
        if(password[i] > 47 && password[i] < 58){
            numberCount++;
        }
    }
    // At least one upper case letter
    // At least one lower case
    // At least one number 
    if(numberCount == 0 || lowerCount == 0 || upperCount == 0){
        return false;
    }
    return true;
}