/* Calculates the total time John and Bill worked */

#include <iostream>
using namespace std;

int main() {
    int daysJohnWorked, hoursJohnWorked, minutesJohnWorked, daysBillWorked, hoursBillWorked, minutesBillWorked;
    int totalDaysInMin, totalHoursInMin, totalMinutesInMin;

    cout << "Please enter the number of days John has worked: ";
    cin >> daysJohnWorked;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hoursJohnWorked;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutesJohnWorked;
    cout << "\n";

    cout << "Please enter the number of days Bill has worked: ";
    cin >> daysBillWorked;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hoursBillWorked;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minutesBillWorked;
    cout << "\n";

    // converts all input values into minutes
    const int MINUTES_IN_DAY = 1440;
    const int MINUTES_IN_HOUR = 60;

    totalDaysInMin = (daysJohnWorked + daysBillWorked) * MINUTES_IN_DAY;
    totalHoursInMin = (hoursJohnWorked + hoursBillWorked) * MINUTES_IN_HOUR;
    totalMinutesInMin = totalDaysInMin + totalHoursInMin + minutesJohnWorked + minutesBillWorked;

    // takes total minutes and converts to days, hours, minutes
    int days, hours, minutes;

    days = totalMinutesInMin / MINUTES_IN_DAY;
    hours = (totalMinutesInMin % MINUTES_IN_DAY) / MINUTES_IN_HOUR;
    minutes = (totalMinutesInMin % MINUTES_IN_DAY) % MINUTES_IN_HOUR;

    cout << "The total time both of them worked together is: " << days << " days, " << hours << " hours and " << minutes << " minutes. ";
    return 0;
}