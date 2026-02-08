/*
    * Exercise 2: User Input
    *
    * Write a C++ program that prompts the user to enter their username and then greets
    * them with a personalized message.
    *
    * Example output:
    * Please enter your username: Alice
    * Hello, Alice!
    *
*/
#include <iostream>
#include <string>

int main(){
    using namespace std;
    string username;
    cout << "Please enter your username: ";
    cin >> username;
    cout << "Hello, " << username << "!" << endl;
    return 0;
}