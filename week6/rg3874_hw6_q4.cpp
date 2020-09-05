/* reads in a line of text and outputs the line with all the digits in all integer numbers replaced with x */

#include <iostream>
#include <ctime>
using namespace std;

void listRandom(int random[], int arrSize);
void validate(int tempPin[], int arrSize);
void reverseArray(int arr[], int arrSize);

const int pin[5] = {2, 9, 1, 5, 8};
int randPin[5];

int main() {
    srand(time(0));
    int random[10], tempPin[5];
    int arrSize = 5, num;

    cout << "Please enter your pin according to the following mapping:\n";
    cout << "PIN: 0 1 2 3 4 5 6 7 8 9 \nNUM: ";

    // list of NUM
    for (int i = 0; i < 10; i++) {
        random[i] = rand() % 3 + 1;
        cout << random[i] << " ";
    }
    listRandom(random, arrSize);
    cout << endl;

    // input PIN
    cin >> num;
    for (int i = 0; i < arrSize; i++) {
        tempPin[i] = num % 10;
        num /= 10;
    }
    reverseArray(tempPin, arrSize);
    validate(tempPin, arrSize);

    return 0;
}

void listRandom(int random[], int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++) {
        randPin[i] = random[pin[i]];
        cout << randPin[i];
    }
}

void reverseArray(int arr[], int arrSize) {
    int val;
    for (int i = 0; i < arrSize / 2; i++) {
        val = arr[i];
        arr[i] = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = val;
    }
}

void validate (int tempPin[], int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++) {
        if (tempPin[i] != randPin[i]) {
            cout << "Your PIN is not correct" << endl;
            break;
        }
    }
    cout << "Your PIN is correct" << endl;
}