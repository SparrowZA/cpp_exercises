#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


std::string generateRandomPassword();

int main(){
    using namespace std;

    cout << "Generating password.\n";
    string password = generateRandomPassword();
    cout << "The password generated was: " << password;
}

std::string generateRandomPassword(){
    std::string password = "";
    // Set the seed for the random generator.
    std::srand(std::time(0));
    // Set the length of the password to a number between
    // 7 and 10
    int passwordLength = (std::rand() % 4) + 7;

    for(int i = 0; i <= passwordLength; i++){
        int character = std::rand() % 94;
        if(character < 33){
            character = 33 + character;
        }
        else if(character > 126){
            character = character - 33;
        }
        password += character;
    }
    return password;
}
