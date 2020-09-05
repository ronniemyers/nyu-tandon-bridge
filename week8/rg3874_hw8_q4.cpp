/* jump it game */

#include <iostream>
using namespace std;

int minJumpCost(int arr[],int start,int n) {
    if (start == n - 1) {
        return arr[start];
    }
    if (start >= n) {
        return INT_MAX;
    }
    return arr[start] + min(minJumpCost(arr,start + 1, n), minJumpCost(arr, start + 2, n));
}

int main() {
    int n;
    cout << "Size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter jump cost: ";
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Minimum jump cost: " << minJumpCost(arr,0, n);

    return 0;
}