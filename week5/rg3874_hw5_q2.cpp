/* prints a pine tree consisting of triangles of increasing sizes and a sequence of triangles */

#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

void printShiftedTriangle (int n, int m, char symbol) {
    for(int row = 1; row <= n; row++) {
        for (int colSpaces = 1; colSpaces <= (n - row) + m; colSpaces++) {
            cout << " ";
        }
        for (int colStars = 1; colStars <= (2 * row) - 1; colStars++) {
            cout << symbol;
        }
        cout << endl;
    }
}

void printPineTree (int n, char symbol) {
    for (int i = 1; i <= n; i++) {
        printShiftedTriangle(i + 1, n - i, symbol);
    }
}

int main() {
    int numLines, numSpaces, numTriangles;
    char charPrint;

    cout << "section a" << endl;
    cout << "Enter the number of lines for the triangle (positive integer): ";
    cin >> numLines;
    cout << "Enter the number of spaces to the left: ";
    cin >> numSpaces;
    cout << "Enter the character to use (eg. *, +, $): ";
    cin >> charPrint;
    cout << endl;

    printShiftedTriangle(numLines, numSpaces, charPrint);
    cout << endl;
    cout << endl;

    cout << "section b" << endl;
    cout << "Enter the number of triangles: ";
    cin >> numTriangles;
    cout << "Enter the character to use (eg. ‘*’ or ’+’ or ‘$’ etc): ";
    cin >> charPrint;
    printPineTree(numTriangles, charPrint);
    return 0;
}