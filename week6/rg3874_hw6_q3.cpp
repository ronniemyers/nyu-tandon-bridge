#include<iostream>
using namespace std;

void reverseArray(int arr[], int arrSize);
void printArray(int arr[], int arrSize);
void removeOdd(int arr[], int & arrSize);
void splitParity(int arr[], int arrSize);

int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);

    return 0;
}

void reverseArray(int arr[], int arrSize) {
    int val;
    for (int i = 0; i < arrSize / 2; i++) {
        val = arr[i];
        arr[i] = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = val;
    }
}

void printArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

// removes all odd numbers
void removeOdd(int arr[], int& arrSize) {
    int even, n = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] % 2 == 0) {
            even = arr[i];
            arr[i] = arr[n];
            arr[n] = even;
            n++;
        }
    }
    arrSize = n;
}

// stores odd numbers first
void splitParity(int arr[], int arrSize) {
    int odd;
    for (int i = 0, n = 0; i < arrSize; i++) {
        if (arr[i] % 2 != 0) {
            odd = arr[i];
            arr[i] = arr[n];
            arr[n] = odd;
            n++;
        }
    }
}