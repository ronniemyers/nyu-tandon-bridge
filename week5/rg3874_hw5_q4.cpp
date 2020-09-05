/* prints all of numbers divisors in an ascending order */

#include <iostream>
#include <cmath>
using namespace std;
 
void printDivisors(int num);

void printDivisors(int num) {
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0){
            cout << i << " ";
        }
    }
    for (int i = sqrt(num); i >= 1; i--) {
        if (num % i == 0) {
            if (num / i != i) {
                cout << num / i << " ";
            }
        }
    }
}

int main() {
    int num;
    cout << "Please enter a positive integer >= 2: ";
    cin >> num;
 
    if (num > 1) {
        printDivisors(num);
    } else {
        cout << "Invalid";
    }
    cout << endl;
    return 0;
}