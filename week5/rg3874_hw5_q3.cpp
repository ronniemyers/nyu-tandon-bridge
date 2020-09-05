/* prints yearly calendar */

#include <iostream>
using namespace std;

int printMonthCalendar(int numOfDays, int startingDay);
bool leapYear (int year);
void printYearCalendar(int year, int startingDay);

void printYearCalendar(int year, int startingDay) {
    bool isLeapYear;
    int daysInMonth;
    int lastDay;
    isLeapYear = leapYear(year);

    for (int month = 1; month <= 12; month++) {
        if (month == 1) {
            cout << "\nJanuary " << year;
            daysInMonth = 31;
        } else if (month == 2) {
            cout << " \nFebruary " << year;
            if (isLeapYear) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
        } else if (month == 3) {
            cout << "\nMarch " << year;
            daysInMonth = 31;
        } else if (month == 4) {
            cout << "\nApril " << year;
            daysInMonth = 30;
        } else if (month == 5) {
            cout << "\nMay " << year;
            daysInMonth = 31;
        } else if (month == 6) {
            cout << "\nJune " << year;
            daysInMonth = 30;
        } else if (month == 7) {
            cout << "\nJuly " << year;
            daysInMonth = 31;
        } else if (month == 8) {
            cout << "\nAugust " << year;
            daysInMonth = 31;
        } else if (month == 9) {
            cout << "\nSeptember " << year;
            daysInMonth = 30;
        } else if (month == 10) {
            cout << "\nOctober " << year;
            daysInMonth = 31;
        } else if (month == 11) {
            cout << "\nNovember " << year;
            daysInMonth = 30;
        } else {
            cout << "\nDecember " << year;
            daysInMonth = 31;
        }
        lastDay = printMonthCalendar(daysInMonth, startingDay);
        startingDay = lastDay + 1;
    }
}

int main() {
    int year, startingDay;

    cout << "Enter a year and the starting day (1-7): ";
    cin >> year >> startingDay;
    printYearCalendar(year, startingDay);
    return 0;
}

int printMonthCalendar(int numOfDays, int startingDay){
    cout << endl << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;

    int currentDay = 0, lastDay;
    int counter = 1;

    for (int i = 1; currentDay < numOfDays; i++) {
        currentDay = i - startingDay + 1;
        if (currentDay >= 1) {
            cout << currentDay;
        }
        if (i % 7 == 0 || currentDay == numOfDays) {
            cout << endl;
        } else {
            cout << "\t";
        }
        counter++;
    }
    lastDay = (counter - 1) % 7;
    return lastDay;
}

bool leapYear (int year) {
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0 )) {
        return true;
    } else {
        return false;
    }
}