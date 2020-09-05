/* returns a new array (of strings), that contains all the words in sentence */

#include <iostream>

std::string* createWordsArray(std::string sentence, int& outWordsArrSize); // converts the sentence to words array

std::string* createWordsArray(std::string sentence, int& outWordsArrSize) {
    for (char i : sentence) {
        if (i == ' ')
            outWordsArrSize++;
    }
    outWordsArrSize++;

    std::string* strWords = new std::string[outWordsArrSize];
    int counter = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            counter++;
            i++;
        }
        strWords[counter] += sentence[i];
    }
    return strWords;
}

int main() {
    std::string sentence;
    int outWordsArrSize = 0;
    std::string* words;
    std::cout << "Enter sentence: ";
    getline(std::cin, sentence);
    words = createWordsArray(sentence, outWordsArrSize);

    std::cout << "outWordsArrSize value: " << outWordsArrSize << std::endl;
    std::cout << std::endl;
    std::cout << "Words array: " << std::endl;
    std::cout << "[";
    for (int i = 0; i < outWordsArrSize; i++) {
        std::cout << "\"" << words[i] << "\"";
        if (i != outWordsArrSize - 1) {
            std::cout << " , ";
        }
    }
    std::cout << "]";

    return 0;
}