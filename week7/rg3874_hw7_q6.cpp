/* prints all the line numbers in sequence entered by the user that contain num */

#include <iostream>
#include <vector>

using namespace std;

typedef int* intarray;
const int FACTOR = 2;
int count(const int* haystack, int haystackLength, int needle);
void printLineNumbers(const int* haystack, int haystackLength, int needle);
void searchAndPrint(const int* haystack, int haystackLength, int needle);
void searchAndPrint(const vector<int>& haystack, int needle);
void copyArray(int* src, int start, int* dst, int distance, int length);
void append(intarray& numbers, int& length, int& capacity, int app);
int main1(); // version 1
int main2(); // version 2

int count(const int* haystack, int haystackLength, int needle) {
    int count = 0;
    for (int i = 0; i < haystackLength; i++) {
        if (needle == haystack[i]) {
            count++;
        }
    }
    return count;
}

void printLineNumbers(const int* haystack, int haystackLength, int needle) {
    int numShowings = 0;
    for (int i = 0; i < haystackLength; i++) {
        if (needle == haystack[i]) {
            if (numShowings > 0) {
                cout << ", ";
            }
            cout << (i + 1);
            numShowings++;
        }
    }
}

void searchAndPrint(const int* haystack, int haystackLength, int needle) {
    int numAppearances = count(haystack, haystackLength, needle);
    cout << needle;
    if (numAppearances > 0) {
        if (numAppearances == 1) {
            cout << " shows in line ";
        } else {
            cout << " shows in lines ";
        }
        printLineNumbers(haystack, haystackLength, needle);
    } else {
        cout << " does not show in any lines";
    }
    cout << endl;
}

void searchAndPrint(const vector<int>& haystack, int needle) {
    searchAndPrint(haystack.data(), haystack.size(), needle);
}

void copyArray(int* src, int start, int* dst, int distance, int length) {
    for (int i = 0; i < length; i++) {
        dst[distance + i] = src[start + i];
    }
}

void append(intarray& numbers, int& length, int& capacity, int app) {
    if (length + 1 > capacity) {
        capacity *= FACTOR;
        int* temp = new int[capacity];
        copyArray(numbers, 0, temp, 0, length);
        delete[] numbers;
        numbers = temp;
    }
    numbers[length] = app;
    length++;
}

int main1() {
    int capacity = 1;
    int* numbers = new int[capacity];
    int length = 0;
    int query;
    cout << "Please enter a sequence of positive integers, each in a separate line.\n"
            "End your input by typing -1." << endl;
    int userInput;
    cin >> userInput;
    while (userInput > 0) {
        append(numbers, length, capacity, userInput);
        cin >> userInput;
    }
    cout << "Please enter the number you want to search for." << endl;
    cin >> query;
    searchAndPrint(numbers, length, query);
    delete[] numbers;
    return 0;
}

int main2() {
    vector<int> number;
    int query;
    cout << "Please enter a sequence of positive integers, each in a separate line.\n"
            "End your input by typing -1." << endl;
    int input;
    cin >> input;
    while (input > 0) {
        number.push_back(input);
        cin >> input;
    }
    cout << "Please enter the number you want to search for." << endl;
    cin >> query;
    searchAndPrint(number, query);
    return 0;
}

int main() {
    return main1() + main2();
}