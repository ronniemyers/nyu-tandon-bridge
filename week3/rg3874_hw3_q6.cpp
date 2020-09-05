/* computes the cost of a long-distance call */
#include <iostream>
#include <string>
using namespace std;

const double DAYTIME_CALL = .40;
const double EVENING_CALL = .25;
const double WEEKEND_CALL = .15;
    
int main() {

    string dayAbbrev;
    int hour, minutes, durationMin;
    char colon;

    cout << "Please enter the day of the week (Mo, Tu, We, Th, Fr, Sa, Su): ";
    cin >> dayAbbrev;
    cout << "Please enter the time the call started (in 24 hour notation hh:mm): ";
    cin >> hour >> colon >> minutes;
    cout << "Enter the length of the call in minutes: ";
    cin >> durationMin;

    double totalCost;
    if (dayAbbrev == "Mo" || dayAbbrev == "Tu" || dayAbbrev == "We" || dayAbbrev == "Th" || dayAbbrev == "Fr") {
        if (hour >= 8 && hour <= 18) {
            totalCost = DAYTIME_CALL * durationMin;
            cout << "The total cost of the call is " << "$" << totalCost;
        } else {
            totalCost = EVENING_CALL * durationMin;
            cout << "The total cost of the call is " << "$" << totalCost;
        }
    } else {
        totalCost = WEEKEND_CALL * durationMin;
        cout << "The total cost of the call is " << "$" << totalCost;
    }

    return 0;
}