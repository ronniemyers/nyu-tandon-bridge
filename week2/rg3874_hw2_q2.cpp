/* Asks the user to enter an amount of money in the format of dollars and
 remaining cents. The program should calculate and print the minimum number of coins
 (quarters, dimes, nickels and pennies) that are equivalent to the given amount */

#include <iostream>
using namespace std;

const int QUARTER_VALUE = 25;
const int DIME_VALUE = 10;
const int NICKEL_VALUE = 5;

int main() {

    int numDollars, numCents;
    int centsValueDollars, totalValue;
    int numQuarters, numDimes, numNickels, numPennies;
    int leftoverQuarters, leftoverDimes, leftoverNickels;

    cout << "Please enter your amount in the format of dollars and cents separated by a space: \n";
    cin >> numDollars >> numCents;

    centsValueDollars = numDollars * 100;
    totalValue = centsValueDollars + numCents;

    numQuarters = totalValue / QUARTER_VALUE;
    leftoverQuarters = totalValue % QUARTER_VALUE;
    numDimes = leftoverQuarters / DIME_VALUE;
    leftoverDimes = leftoverQuarters % DIME_VALUE;
    numNickels = leftoverDimes / NICKEL_VALUE;
    leftoverNickels = leftoverDimes % NICKEL_VALUE;
    numPennies = leftoverNickels;

    cout << numDollars << " dollars and " << numCents << " cents are: \n";
    cout << numQuarters << " quarters, " << numDimes << " dimes, " << numNickels << " nickels and " << numPennies << " pennies \n";

    return 0;
}