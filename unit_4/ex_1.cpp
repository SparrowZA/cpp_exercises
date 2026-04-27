#include <iostream>


float sumValues(float values[], size_t size);

int main(){
    const int ARR_SIZE = 6;
    float monthlyCosts [] = {
        121.98, 879.45, 19.00, 23.99, 83.01, 43.22
    };
    float total;

    total = sumValues(monthlyCosts, ARR_SIZE);

    std::cout << "The sum of the values are:\n";
    std::cout << total;
    return 0;
}

float sumValues(float values[], size_t size){
    float sum = 0;
    for(int i = 0; i < size; i++){
        sum += values[i];
    }
    return sum;
}
