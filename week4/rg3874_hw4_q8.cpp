/* randomly chooses an integer between 1 and 100 (inclusive), and have the user try to guess that number */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randomNumber, guessInput, guessesLeft = 5, numLow = 1, numHigh = 100;

    srand(time(0));
    randomNumber = (rand() % 100) + 1; // is in the range of 1-100

    cout << "I thought of a number between 1 and 100! Try to guess it. \n";

    while (guessesLeft > 0) {
        cout << "Range: [" << numLow << ", " << numHigh << "], Number of guesses left: " << guessesLeft << endl;
        cout << "Your guess: ";
        cin >> guessInput;
        
        if (guessesLeft == 1) {
            if (guessInput == randomNumber) {
                cout << "Congrats! You guessed my number in " << guessesLeft << " guesses. \n";
                break;
            } else {
                cout << "Out of guesses! My number is " << randomNumber << endl;
                break;
            }
        }
        
        if (guessInput == randomNumber) {
            cout << "Congrats! You guessed my number in " << guessesLeft << " guesses. \n";
            break;
        } else if (guessInput > randomNumber) {
            cout << "Wrong! My number is smaller. \n\n";
            numHigh = guessInput - 1;
        } else if (guessInput < randomNumber) {
            cout << "Wrong! My number is bigger. \n\n";
            numLow = guessInput + 1;
        }
        guessesLeft--;
    }

    return 0;
}