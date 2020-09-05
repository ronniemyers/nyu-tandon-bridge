/* calculates body mass index (bmi) using the formula: weight/height^2 */

#include <iostream>
using namespace std;

    const double LBS_IN_KG = 0.453592;
    const double INCHES_IN_METER = 0.0254;

int main() {
    double weightLbs, heightIn, weightKg, heightM, bmi;

    cout << "Please enter weight (in pounds): ";
    cin >> weightLbs;
    cout << "Please enter height (in inches): ";
    cin >> heightIn;

    // converts lbs, inches -> kg, meters
    weightKg = weightLbs * LBS_IN_KG;
    heightM = heightIn * INCHES_IN_METER;

    // calculate bmi
    bmi = weightKg / (heightM * heightM);

    if (bmi < 18.5) {
        cout << "The weight status is: Underweight";
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "The weight status is: Normal";
    } else if (bmi >= 25 && bmi < 30) {
        cout << "The weight status is: Overweight";
    } else {
        cout << "The weight status is: Obese";
    }
    return 0;
}