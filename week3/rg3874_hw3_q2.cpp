/* determines current educational standing */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int graduationYear, currentYear, currentStatus;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your graduation year: ";
    cin >> graduationYear;
    cout << "Please enter current year: ";
    cin >> currentYear;

    currentStatus = graduationYear - currentYear;

    if (currentStatus > 4) {
        cout << name << ", you are not in college yet";
    }
    else if (currentStatus == 4) {
        cout << name << ", you are a Freshman";
    }
    else if (currentStatus == 3) {
        cout << name << ", you a Sophomore";
    }
    else if (currentStatus == 2) {
        cout << name << ", you are a Junior";
    }
    else if (currentStatus == 1) {
        cout << name << ", you are a Senior";
    }
    else {
        cout << name << ", you graduated";
    }
    
    return 0;
}