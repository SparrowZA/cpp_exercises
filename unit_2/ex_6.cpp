/*
Exercise 6: Coin Flip Simulation
Write a C++ program that simulates flipping a coin a specified number of times. The
program should count the number of heads and tails, and then calculate and display the
average number of heads and tails flipped. Use the rand() function to simulate the coin
flips, where 0 represents tails and 1 represents heads.
Make sure to seed the random number generator using srand() with the current time to
ensure different results each time you run the program.
*/
#include <iostream>

int main(){
    using namespace std;

    // Initialise variables
    int coinFlips, currentFlip;
    int heads = 0; 
    int tails = 0;
    float headsAvg, tailsAvg;
    srand(time(NULL)); // Seed the random number generator

    // User input
    cout << "How many times do you want to flip the coin? ";
    cin >> coinFlips;

    // Calculations
    for(int i=0; i < coinFlips; i++){
        // We generate a random number and then take the modulus to get either 0 or 1
        currentFlip = rand() % 2;
        // We let 0 = Tails
        if(currentFlip == 0){
            tails += 1;
        }
        else{
            heads += 1;
        }
    }
    headsAvg = heads / (coinFlips * 1.0);
    tailsAvg = tails / (coinFlips * 1.0);
    
    // Output
    cout << "The average tails flipped: " << tailsAvg << endl;
    cout << "The average heads flipped: " << headsAvg << endl;
    return 0;
}