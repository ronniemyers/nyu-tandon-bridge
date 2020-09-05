/* determines if two strings are anagrams */

#include <iostream>
#include <string>

const int MAX_SIZE = 52;
bool anagram(const char* sent1, const char* sent2);

bool anagram(const char* sent1, const char* sent2) {

    int count[MAX_SIZE] = {};
    int i;

    for (i = 0; sent1[i] && sent2[i]; i++) {
        count[sent1[i]]++;
        count[sent2[i]]--;
    }

    if (sent1[i] || sent2[i]) {
        return false;
    }

    for (i = 0; i < MAX_SIZE; i++) {
        if (count[i])
            return false;
    }
    return true;
}

int main() {
    std::string firstSentence;
    std::string secondSentence;

    std::cout << "Find out if two sentences are anagrams." << std::endl;
    std::cout << "Enter the first sentence: ";
    getline(std::cin, firstSentence);
    std::cout << "Enter the second sentence: ";
    getline(std::cin, secondSentence);

    char* string1 = new char[firstSentence.length()];
    char* string2 = new char[secondSentence.length()];

    for (int i = 0; i <= firstSentence.length(); i++) {
        string1[i] = firstSentence[i];
    }

    for (int i = 0; i <= secondSentence.length(); i++) {
        string2[i] = secondSentence[i];
    }

    if (anagram(string1, string2)) {
        std::cout << "The two strings are anagrams.";
    } else {
        std::cout << "The two strings are not anagrams.";
    }

    delete[] string1;
    delete[] string2;

    return 0;
}