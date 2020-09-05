#include <iostream>
using namespace std;

const int MAX_SIZE = 20;

int minInArray(int arr[], int arrSize);
void indices(int arrList[], int min);

int main() {
    cout << "section a" << endl;
    int n, i, min;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter a list of integers: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    min = minInArray(arr, n);
    cout << "The minimum value in the array is: " << min;

    cout << "\nsection b" << endl;
    int arrList[20];
    cout << "Please enter 20 integers separated by a space: \n";
    for (i = 0; i < MAX_SIZE; i++) {
        cin >> arrList[i];
    }

    min = minInArray(arrList, MAX_SIZE);
    cout << "The minimum value is " << min << " and it is located in the following indices: ";
    indices(arrList, min);
}

int minInArray(int arr[], int arrSize) {
    int min = 900;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void indices(int arrList[], int min) {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (arrList[i] == min) {
            cout << i << " ";
        }
    }
}