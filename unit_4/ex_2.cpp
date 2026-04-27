#include <iostream>


int findMax(const int valueArr[], size_t arrSize);

int findMin(const int valueArr[], size_t arrSize);

void sortArr(int valueArr[], size_t arrSize);

int main(){
    int valueArr[] = {
        155, 446, 753, 368, 173, 459, 858, 772, 826, 54, 114, 925, 869,
        220, 306, 293, 907, 169, 662, 302, 157, 133, 298, 383, 67, 82, 972,
        803, 574, 663, 519, 48, 468, 685, 202, 950, 35, 939, 906, 845, 210,
        7, 422, 152, 393, 247, 337, 91, 68, 571, 313, 553, 77, 350, 529,
        694, 997, 936, 642, 135, 629, 424, 224, 531, 813, 46, 781, 504,
        648, 944, 477, 834, 666, 653, 734, 369, 926, 31, 63, 665, 352, 142,
        66, 521, 851, 389, 912, 38, 402, 355, 192, 913, 824, 250, 385, 917,
        933, 968, 562, 61
    };
    // int valueArr[] = {4, 6, 10, 8, 1};
    const int arrSize = std::size(valueArr);

    // Method #1
    int max = findMax(valueArr, arrSize);
    int min = findMin(valueArr, arrSize);
    std::cout << "M E T H O D   # 1\n";
    std::cout << "=================\n";
    std::cout << "The minimum value in the array is: " << min << "\n";
    std::cout << "The maximum value in the array is: " << max << std::endl;
    
    // Method #2
    sortArr(valueArr, arrSize);
    min = valueArr[0];
    max = valueArr[arrSize - 1];
    std::cout << "M E T H O D   # 2\n";
    std::cout << "=================\n";
    std::cout << "The minimum value in the array is: " << min << "\n";
    std::cout << "The maximum value in the array is: " << max << std::endl;


    return 0;
}

int findMax(const int valueArr[], size_t arrSize){
    int max = 0;
    for(size_t i = 0; i < arrSize; i++){
        if(valueArr[i] > max){
            max = valueArr[i];
        }
    }
    return max;
}

int findMin(const int valueArr[], size_t arrSize){
    int min = valueArr[0];
    for(size_t i = 0; i < arrSize; i++){
        if(valueArr[i] < min){
            min = valueArr[i];
        }
    }
    return min;
}

void sortArr(int valueArr[], size_t arrSize){
    // This sort algorithm has a time comlexity of O(n^2) Quadratic
    int tmp = 0;
    for(size_t i = 0; i < arrSize; i++){
        for(int j = i + 1; j < arrSize; j++){
            if(valueArr[i] > valueArr[j]){
                tmp = valueArr[i];
                valueArr[i] = valueArr[j];
                valueArr[j] = tmp;
            }
        }
    }
}