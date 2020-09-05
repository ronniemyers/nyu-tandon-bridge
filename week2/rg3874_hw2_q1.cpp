/* Asks the user to enter a number of quarters, dimes, nickels and pennies and 
then outputs the monetary value of the coins in the format of dollars and remaining cents */

#include <iostream>
using namespace std;

const int QUARTER_VALUE = 25;
const int DIME_VALUE = 10;
const int NICKEL_VALUE = 5;
const int CENT_VALUE = 1;

int main() {

    int numberOfQuarters, totalValueOfQuarters;
    int numberOfDimes, totalValueOfDimes;
    int numberOfNickels, totalValueOfNickels;
    int numberOfPennies, totalValueOfPennies;
    int totalValueOfCoins, totalDollars, totalCents;

    cout << "Please enter number of coins: \n";
    cout << "# of quarters: ";
    cin >> numberOfQuarters;

    cout << "# of dimes: ";
    cin >> numberOfDimes;

    cout << "# of nickels: ";
    cin >> numberOfNickels;

    cout << "# of pennies: ";
    cin >> numberOfPennies;

    totalValueOfQuarters = numberOfQuarters * QUARTER_VALUE;
    totalValueOfDimes = numberOfDimes * DIME_VALUE;
    totalValueOfNickels = numberOfNickels * NICKEL_VALUE;
    totalValueOfPennies = numberOfPennies * CENT_VALUE;

    totalValueOfCoins = totalValueOfQuarters + totalValueOfDimes + totalValueOfNickels + totalValueOfPennies;

    totalDollars = totalValueOfCoins / 100;
    totalCents = totalValueOfCoins % 100;

    cout << "The total is " << totalDollars << " dollars and " << totalCents << " cents";

    return 0;
}