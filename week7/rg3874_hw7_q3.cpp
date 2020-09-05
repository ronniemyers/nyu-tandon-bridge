/* reorders array and prioritizes odd numbers */

#include <iostream>

const int SIZE = 6;
void oddsKeepEvensFlip(int arr[], int arrSize);

void oddsKeepEvensFlip(int arr[], int arrSize) {
    int outputArr[arrSize];
    int oddCounter = 0;
    int evenCounter = arrSize - 1;

    for (int index = 0; index < arrSize; index++) {
        if (arr[index] % 2 != 0) {
            outputArr[oddCounter] = arr[index];
            oddCounter++;
        } else {
            outputArr[evenCounter] = arr[index];
            evenCounter--;
        }
    }

    for (int index = 0; index < arrSize; index++) {
        arr[index] = outputArr[index];
    }
}

int main() {
    int array[SIZE] = {5, 2, 11, 7, 6, 4};
    std::cout << "Initial array: " << std::endl;

    for (int index : array) {
        std::cout << index << ' ';
    }
    std::cout << std::endl;
    std::cout << "Base address of array is: " << &array << std::endl;
    std::cout << "\nAfter oddsKeepEvensFlip(): " << std::endl;
    oddsKeepEvensFlip(array, SIZE);

    for (int index : array) {
        std::cout << index << ' ';
    }
    std::cout << std::endl;
    std::cout << "Address of array is: " << &array << std::endl;
    std::cout << std::endl;

    return 0;
}