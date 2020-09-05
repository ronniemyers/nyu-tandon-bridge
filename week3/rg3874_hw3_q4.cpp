/* rounding numbers using floor, ceiling, and the nearest whole number w/out cmath */

#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main() {
    double decimal, realNum;
    int integer, floorNum, ceilingNum, roundNum, roundingMethod;

    cout << "Please enter a Real number: \n";
    cin >> realNum;
    cout << "Choose your rounding method \n";
    cout << "1. Floor round \n";
    cout << "2. Ceiling round \n";
    cout << "3. Round to the nearest whole number \n";
    cin >> roundingMethod;

    switch (roundingMethod) {
        case 1: // rounds down
            integer = (int)realNum;
            decimal = (realNum - integer);

            if (realNum >= 0) {
                floorNum = (int)realNum;
                cout << floorNum;
            } else {
                floorNum = (int)(realNum - 1);
                cout << floorNum;
            }
            break;
        case 2: // rounds up
            integer = (int)realNum;
            decimal = (realNum - integer);

            if (realNum >= 0) {
                if (decimal == 0) {
                    ceilingNum = (int)realNum;
                    cout << ceilingNum;
                } else {
                    ceilingNum = (int)(realNum + (1 - decimal));
                    cout << ceilingNum;
                }
            } else {
                ceilingNum = (int)(realNum + (1 + decimal));
                cout << ceilingNum;
            }
            break;
        case 3:
            integer = (int)realNum;
            decimal = (realNum - integer);

            if (realNum >= 0) {
                if (decimal >= .5) {
                    roundNum = (int)(realNum + 1);
                    cout << roundNum;
                } else {
                    roundNum = (int)realNum;
                    cout << roundNum;
                }
            } else {
                if (decimal <= -.5) {
                    roundNum = (int)(realNum - 1);
                    cout << roundNum;
                } else {
                    roundNum = (int)(realNum);
                    cout << roundNum;
                }
            }
            break;

        default:
            cout << "Please enter a valid rounding method";
            break;
    }

    return 0;
}