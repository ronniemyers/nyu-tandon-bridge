/* reads a sequence of positive integers and calculates their geometric mean */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, length, iterate, product = 1;
    double geometricMean;

    cout << "section a \n";
    cout << "Please enter the length of the sequence: ";
    cin >> length;
    cout << "Please enter your sequence: \n";
    iterate = length;

    while (iterate > 0) {
        cin >> num;
        product *= num;
        iterate--;
    }

    geometricMean = pow(product, (1.0 / length));
    cout << "The geometric mean is: " << geometricMean << endl;

    cout << endl;
    cout << "section b \n";
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your \n";
    cout << "sequence by typing -1: \n";

    int count = 0;
    product = 1;
    
    while (num != -1) {
        cin >> num;
        if (num == -1) {
            break;
        } else {
            product *= num;
            count++;
        }
        num--;
    }

    geometricMean = pow(product, (1.0 / count));
    cout << "The geometric mean is " << geometricMean << endl;
    return 0;
}