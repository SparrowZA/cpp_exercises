/*
    * Exercise 1: Vowel or Consonant
    * Write a program that asks the user to enter a letter and then determines whether
    * the letter is a vowel or a consonant. 
    * For this exercise, consider 'y' as a vowel when it is used in words like "myth"
    * and "gym", but as a consonant when it is used in words like "yellow" and "yes". 
    * The program should output whether the letter is a vowel, a consonant, or sometimes
    * a vowel and sometimes a consonant.
    *
*/
#include <iostream>


const char VOWELS[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

int main(){
    using namespace std;

    // Initialise variables
    char letter;

    // User input
    cout << "Enter a letter: ";
    cin >> letter;

    // Output
    // Here we are using the binary operator to check if a letter is a vowel
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
       letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
        cout << "The letter is a vowel." << endl;
    }
    else if(letter == 'y' || letter == 'Y') {
        cout << "The letter is sometimes a vowel and sometimes a consonant." << endl;

    }
    else {
        cout << "The letter is a consonant." << endl;
    }

    // Another solution using the find function - this is a bit more of an advanced
    // solution

    // Setup a point to the end of the vowels array
    const char* end = VOWELS + sizeof(VOWELS);
    // Find does a linear search from the first element to the end pointer. If nothing
    // is found it return end
    if(find(VOWELS, end, letter) != end){
        cout << "The letter is a vowel." << endl;
    }
    else if(letter == 'y' || letter == 'Y') {
        cout << "The letter is sometimes a vowel and sometimes a consonant." << endl;

    }
    else {
        cout << "The letter is a consonant." << endl;
    }
    
    return 0;
}