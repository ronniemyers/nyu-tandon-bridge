/* determines if array is sorter */

#include <iostream>
#include <cmath>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main() {
    int arr[] = {2, -1, 3, 10};
    int sum = sumOfSquares(arr, 4);
    cout << sum << endl;

    bool sorted = isSorted(arr, 4);

    if(sorted) {
        cout << "Sorted"<< endl;
    } else {
        cout << "Not sorted"<< endl;
    }

    return 0;

}

int sumOfSquares(int arr[], int arrSize) {
    if (arrSize <= 0) {
        return 0;
    }
    return (sumOfSquares(arr, arrSize - 1) + pow(arr[arrSize - 1], 2));
}

bool isSorted(int arr[],int arrSize) {
    if (arrSize == 0 || arrSize == 1) {
        return true;
    }

    if (arr[arrSize - 1] < arr[arrSize - 2]) {
        return false;
    }

    return isSorted(arr, arrSize - 1);
}