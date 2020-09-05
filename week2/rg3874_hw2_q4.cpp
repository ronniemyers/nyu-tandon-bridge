/* reads from the user two positive integers, and prints the result of when we add, subtract multiply, divide, div and mod them */

#include <iostream>
using namespace std;

int main() {
    int int1, int2;
    int add, subtract, multiply, div, mod;
    double divide;

    cout << "Please enter two positive integers, separated by a space: \n";
    cin >> int1 >> int2;

    // arithmetic expressions
    add = int1 + int2;
    subtract = int1 - int2;
    multiply = int1 * int2;
    divide = double(int1) / int2;
    div = int1 / int2;
    mod = int1 % int2;

    cout << int1 << " + " << int2 << " = " << add <<endl;
    cout << int1 << " - " << int2 << " = " << subtract <<endl;
    cout << int1 << " * " << int2 << " = " << multiply <<endl;
    cout << int1 << " / " << int2 << " = " << divide <<endl;
    cout << int1 << " div " << int2 << " = " << div <<endl;
    cout << int1 << " mod " << int2 << " = " << mod <<endl;

    return 0;
}