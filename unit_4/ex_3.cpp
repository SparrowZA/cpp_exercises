#include <iostream>
#include <string>


int calculateAverageLength(const std::string strArr[], size_t arrSize);
// This returns the average length of a words in a list. The average returned
// is a whole number floored and not a fraction.

int main(){
    std::string word_list[] = {
        "apple", "banana", "cherry", "delta", "eagle", "forest", "giraffe",
        "honey", "island", "jungle", "kangaroo", "lemon", "monkey", "nectar",
        "orange", "peach", "quartz", "river", "sunset", "tiger", "umbrella",
        "violet", "water", "xenon", "yellow", "zebra", "waiter", "wanted", 
        "a", "step", "tyre"
    };
    size_t arrSize = std::size(word_list);

    int avgLength = calculateAverageLength(word_list, arrSize);

    std::cout << "The average word length is: " << avgLength << std::endl;

    return 0;
}

int calculateAverageLength(const std::string strArr[], size_t arrSize){
    int total = 0;
    for(size_t i = 0; i < arrSize; i++){
        total += strArr[i].length();
    }
    return total / arrSize;
}
