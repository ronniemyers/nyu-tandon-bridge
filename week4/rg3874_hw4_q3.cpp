/* reads a positive integer (in a decimal representation), and prints its binary (base 2) representation */

#include <iostream>
using namespace std;

const int BASE_10 = 10;

int main() {
    int num, remainingValue, binaryNumber = 0, counter = 1;

    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "The binary representation of " << num;

    while (num != 0) {
        remainingValue = num % 2;
        num /= 2; 
        binaryNumber += remainingValue * counter;
        counter *= BASE_10;
    }

    cout <<" is " << binaryNumber << endl;

    return 0;
}