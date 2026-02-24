#include <iostream>
#include <string>


std::string generateRandomPassword();
// Generates a password string that conforms to the specified
// rules.
bool isValidPassword(const std::string& password);
// Takes a string value and returns whether the password
// conforms to the correct safety standards

int main(){
    int count = 0;
    std::string pword;
    bool state = false;

    while(!state){
        pword = generateRandomPassword();
        count++;
        state = isValidPassword(pword);
    }

    std::cout << "Your password is: " << pword << std::endl;
    std::cout << "It only took " << count << " attempts.";
    return 0;
}

std::string generateRandomPassword(){
    std::string password = "";
    // Set the seed for the random generator.
    std::srand(std::time(0));
    // Set the length of the password to a number between
    // 7 and 10
    int passwordLength = (std::rand() % 4) + 7;

    for(int i = 0; i <= passwordLength; i++){
        int character = (std::rand() % 75) + 48;
        password += character;
    }
    return password;
}

bool isValidPassword(const std::string& password){
    int upperCount = 0, lowerCount = 0, numberCount = 0;
    // 8 characters long
    if(password.length() < 8){
        return false;
        std::cout << "Password not long enough.";
        return false;
    }

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
