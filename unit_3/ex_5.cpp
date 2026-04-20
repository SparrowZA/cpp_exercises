#include <iostream>
#include <string>


std::string encrypt(const std::string data, int shiftValue);

char shiftUpper(const char letter, int shift);

char shiftLower(const char letter, int shift);

int main(){
    std::string inputStr, encryptedStr;
    int rotationNumber;

    std::cout << "Please write a sentence to be encrypted: ";
    std::getline(std::cin, inputStr);

    std::cout << "Choose a number between 1-26: ";
    std::cin >> rotationNumber;

    encryptedStr = encrypt(inputStr, rotationNumber);

    std::cout << "The encrypted string is:\n";
    std::cout << "\"" << encryptedStr << "\"" << std::endl;
    return 0;
}

std::string encrypt(const std::string data, int shiftValue){
    std::string encryptedPayload;
    char newChar;
    for(int i=0; i < data.length(); i ++){
        newChar = data[i];
        if(isupper(data[i])){
            newChar = shiftUpper(data[i], shiftValue);
        }
        else if(islower(data[i])){
            newChar = shiftLower(data[i], shiftValue);
        }
        encryptedPayload.push_back(newChar);
    }
    return encryptedPayload;
}

char shiftUpper(const char letter, int shift){
    /* Uppercase 65-90 */
    if((90 - letter) < shift){
        char tmp = 64 + ((letter + shift) - 90);
        return tmp;
    }
    else{
        return letter + shift;
    }
}

char shiftLower(const char letter, int shift){
    /* Lowercase 97-122 */
    if((122 - letter) < shift){
        char tmp = 96 + ((letter + shift) - 122);
        return tmp;
    }
    else{
        return letter + shift;
    }
}