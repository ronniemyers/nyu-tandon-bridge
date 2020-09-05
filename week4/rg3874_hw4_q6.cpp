/* prints all of the numbers from 1 to n that have more even digits than odd digits */

#include <iostream>
using namespace std;

int main(){
    int n, counter, num, evenCounter, oddCounter, currDigit, numCount;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (counter = 1; counter <= n; counter++) {
        num = counter;
        evenCounter = 0;
        oddCounter = 0;
        numCount = 0;

        while (num > 0) {
            currDigit = num % 10;
            
            if (currDigit % 2 == 0) {
                evenCounter++;
                numCount++;
            } else {
                oddCounter++;
                numCount++;
            }
            num /= 10;
        }
        
        if ((numCount - evenCounter) < (numCount - oddCounter)) {
            cout << counter;
            cout << endl;
        }
    }

    return 0;
}