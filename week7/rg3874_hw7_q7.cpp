/* uses the find missing function and returns an array */

#include <iostream>

int* findMissing(int arr[], int n, int& resArrSize);
void printArray(int* arr, int arrSize);

int* findMissing(int arr[], int n, int& resArrSize) {
    int *tempArr = new int[n];
    for (int i = 0; i < n; i++) {
        tempArr[i] = i;
    }
    int count = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] < n) {
            if (tempArr[arr[i]] != -1) {
                tempArr[arr[i]] = -1;
                count--;
            }
        }
    }

    int *missingArr = new int[count];
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (tempArr[i] != -1) {
            missingArr[j] = tempArr[i];
            j++;
        }
    }
    delete [] tempArr;
    resArrSize = count;
    return missingArr;
}

void printArray(int* arr, int arrSize) {
    std::cout << "Array: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arrSize = 6;
    int arr[] = {3, 1, 3, 0, 6, 4};
    int *missingNumArr;
    int newArrSize;
    missingNumArr = findMissing(arr, arrSize ,newArrSize);
    std::cout << "resArrSize: " << newArrSize << std::endl;
    printArray(missingNumArr, newArrSize);
    delete [] missingNumArr;

    return 0;
}