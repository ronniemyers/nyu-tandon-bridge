/* outputs the number of words in the line and number of occurrences of each letter */

#include <iostream>
#include <string>

const int ALPHA = 26;
void analyze(std::string& text);

void analyze(std::string& text) {
    int counter = 1;
    int letters[26] = {};
    int c;

    for (char i : text) {
        if (i == ' ') {
            counter++;
        }
        if (tolower(i) >= 'a' && tolower(i) <= 'z' && i != ' ') {
            c = tolower(i) - 'a';
            letters[c]++;
        }
    }
    std::cout << counter << "\t" << "words" << std::endl;

    for (int i = 0; i < ALPHA; i++) {
        if (letters[i] > 0) {
            std::cout << letters[i] << "\t" << char (i + 'a') << std::endl;
        }
    }
}

int main() {
    std::string text;
    std::cout << "Please enter a line of text: " << std::endl;
    getline(std::cin,text);
    analyze(text);
    return 0;
}