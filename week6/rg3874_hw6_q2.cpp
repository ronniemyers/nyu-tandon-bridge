#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main() {
    char string[20];

    cout << "Please enter a word: ";
    cin >> string;
    isPalindrome(string);

    if (isPalindrome(string)) {
        cout << string << " is a palindrome \n";
    } else {
        cout << string << " is not a palindrome \n";
    }

    return 0;
}

bool isPalindrome(string str) {
    for (int n = str.length() - 1, i = 0; i < n; n--, i++) {
        if (str[i] != str[n]) {
            return false;
        }
    }
    return true;
}