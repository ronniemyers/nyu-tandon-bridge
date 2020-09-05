/* computes how much a customer has to pay after purchasing two items */

#include <iostream>
using namespace std;

const double CLUB_DISCOUNT = .9;
const double FIFTY_OFF_DISCOUNT = .5;

int main() {
    char clubCard;
    double item1, item2, taxRate, basePrice, priceAfterDiscounts, totalPrice;

    cout << "Enter price of first item: ";
    cin >> item1;
    cout << "Enter price of second item: ";
    cin >> item2;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;

    basePrice = item1 + item2;

    // buy one get one half off promotion: the lower price item is half price
    if (item1 > item2) {
        priceAfterDiscounts = item2 - (item2 * FIFTY_OFF_DISCOUNT) + item1;
    }
    else {
        priceAfterDiscounts = item1 - (item1 * FIFTY_OFF_DISCOUNT) + item2;
    }

    // if the customer is club card member, additional 10% off
    if (clubCard == 'Y' || clubCard == 'y') {
        priceAfterDiscounts = priceAfterDiscounts * CLUB_DISCOUNT;
    } else {
        // customer is not a club card member
    }

    totalPrice = (priceAfterDiscounts + (priceAfterDiscounts * taxRate)/100);

    cout << "Base price: " << basePrice <<endl;
    cout << "Price after discounts " << priceAfterDiscounts <<endl;
    cout << "Total price: " << totalPrice <<endl;

    return 0;
}