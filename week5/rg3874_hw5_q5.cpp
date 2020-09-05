/* prints all perfect and amicable numbers */

#include<iostream>
#include <cmath>
using namespace std;

int outCountDivs = 0, outSumDivs = 0;
void analyzeDividors(int num, int& outCount, int& outSum);

void analyzeDividors(int num, int& outCount, int& outSum) {
    for (int j = 2; j <= sqrt(num); j++) {
        if (num % j == 0) {
            if (j == (num / j)) {
                outSum = outSum + j;
                outCount = outCount + 1;
            } else {
                outSum = outSum + j + num / j;
                outCount = outCount + 2;
            }
        }
    }
    outSum = outSum + 1;
    outCount = outCount + 1;
}

bool isPerfect(int num) {
    if (num == outSumDivs) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int m;
    cout << "Enter a positive integer greater or equal than 2: ";
    cin >> m;

    cout << "Perfect numbers from 2 to M: ";
    for (int i = 2; i <= m; i++) {
        outCountDivs = 0;
        outSumDivs = 0;

        analyzeDividors(i, outCountDivs, outSumDivs);
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << "\nAmicable numbers: ";
    for (int j = 2; j <= m; j++) {
        outCountDivs = 0;
        outSumDivs = 0;
        analyzeDividors(j, outCountDivs, outSumDivs);

        int sum1 = outSumDivs;
        outCountDivs = 0;
        outSumDivs = 0;
        analyzeDividors(sum1, outCountDivs, outSumDivs);

        int sum2 = outSumDivs;
        if (j < sum1 && (sum1 <= m) && sum2 == j) {
            cout << j << " " << sum1 << "\n";
        }
    }
    cout << endl;
    return 0;
}