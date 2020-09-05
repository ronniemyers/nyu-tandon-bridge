/* reads from the user a (decimal) number, and prints it’s representation in the simplified Roman numerals system */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string finalRomanString;
    cout << "Enter decimal number: \n";
    cin >> num;
    cout << num;

    while (num > 0){
        int romanInNumber;
        string romanNumeral;
        
        if (num >= 1000) {
            romanInNumber = 1000;
            romanNumeral = "M";
        } else if (num < 1000 && num >= 500) {
            romanInNumber = 500;
            romanNumeral = "D";
        } else if (num < 500 && num >= 100) {
            romanInNumber = 100;
            romanNumeral = "C";
        } else if (num < 100 && num >= 50) {
            romanInNumber = 50;
            romanNumeral = "L";
        } else if (num < 50 && num >= 10) {
            romanInNumber = 10;
            romanNumeral = "X";
        } else if (num < 10 && num >= 5) {
            romanInNumber = 5;
            romanNumeral = "V";
        } else {
            romanInNumber = 1;
            romanNumeral = "I";
        }

        int timesToRepeatLetter = num / romanInNumber;
        num %= romanInNumber;

        while (timesToRepeatLetter--) {
            finalRomanString += romanNumeral;
        }
    }

cout << " is " << finalRomanString << endl;

    return 0;
}