/* calculates the quadratic formula and return solution */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, determinant, sqrtDet, quadPosSolution, quadNegSolution, quadZeroSolution;

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    determinant =  pow(b, 2) - (4 * a * c);
    sqrtDet = sqrt(determinant);
    quadPosSolution = (-b + sqrtDet) / (2 * a);
    quadNegSolution = (-b - sqrtDet) / (2 * a);
    quadZeroSolution = (-b)/(2 * a);

    if (a == 0) {
        if (b == 0 && c == 0) {
            cout << "This equation has an infinite number of solutions";
        } else if (b != 0 && c != 0 || c == 0 && b != 0) {
            cout << "This equation has one solution";
        } else {
            cout << "This equation has no solution";
        }
    } else if (determinant == 0) {
        cout << "This equation has a single real solution x =" << quadZeroSolution;
    } else if (determinant < 0) {
        cout << "This equation has no real solution";
    } else if (determinant > 0) {
        cout << "This equation has two real solutions x =" << quadPosSolution << " and " << quadNegSolution;
    }

    return 0;
}