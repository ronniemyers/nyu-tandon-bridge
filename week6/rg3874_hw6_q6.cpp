/* replaces space-separated digits with x */

#include <iostream>
#include <string>
using namespace std;

bool isNonDigit(string input, int i);
bool wordIsInt(string input, int i, int len);
void renderWord(string input, int &ind, int len);
void renderNum(string input, int &ind, int len);

int main() {
    cout << "Please enter a line of text: " << endl;
    string str;
    getline(cin, str);

    int i = 0;
    int len = str.length();

    while (i < len) {
        char curr = str.at(i);
        if (curr == ' ') {
            cout << " ";
            i++;
        } else if (isNonDigit(str, i)) {
            renderWord(str, i, len);
        } else if (!wordIsInt(str, i, len)) {
            renderWord(str, i, len);
        } else {
            renderNum(str, i, len);
        }
    }
    cout << endl;
    
    return 0;
}

bool isNonDigit(string input, int i) {
    char curr = input.at(i);
    return !(curr >= '0' && curr <= '9');
}

bool wordIsInt(string input, int i, int len) {
    bool integer = true;
    while (i < len && input.at(i) != ' ') {
        if (isNonDigit(input, i)) {
            integer = false;
        } 
        i++;
    }
    return integer;
}

void renderWord(string input, int& ind, int len) {
    while (ind < len && input.at(ind) != ' ') {
        cout << input.at(ind++);
    }
}

void renderNum(string input, int& ind, int len) {
        while (ind < len && input.at(ind) != ' ') {
        cout << 'x';
        ind++;
    }
}