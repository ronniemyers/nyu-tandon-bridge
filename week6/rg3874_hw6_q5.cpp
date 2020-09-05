#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_name, last_name, middle_initial;

    cout << "Please enter your full name (first, middle, last name): ";
    cin >> first_name >> middle_initial >> last_name;
    cout << last_name << ", " << first_name << " " << middle_initial[0] << ". \n";

    return 0;
}