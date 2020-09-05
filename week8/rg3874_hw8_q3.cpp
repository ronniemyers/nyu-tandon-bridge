/* returns min in array  */

#include <iostream>

int minInArray1(int arr[],int arrSize) {
    if (arrSize == 1) {
        return arr[0];
    } else {
        int min = minInArray1(arr, arrSize - 1);
        if (arr[arrSize - 1] < min) {
            min = arr[arrSize - 1];
        }
        return min;
    }
}

int minInArray2(int arr[], int low, int high) {
    if (low == high) {
        return arr[low];
    } else {
        int min = minInArray2(arr, low + 1, high);
        if(arr[low] < min) {
            min = arr[low];
        }
        return min;
    }
}

int main() {
    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;

    res1 = minInArray1(arr, 10);
    res2 = minInArray2(arr, 0, 9);
    std::cout << res1 << " " << res2 << std::endl;

    res3 = minInArray2(arr, 2, 5);
    res4 = minInArray1(arr + 2, 4);
    std::cout << res3 << " " << res4 << std::endl;

    return 0;
}