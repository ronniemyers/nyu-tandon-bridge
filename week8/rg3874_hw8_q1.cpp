/* prints triangles and a ruler */

#include <iostream>

void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

void printTriangle(int n) {
    if (n <= 0) {
        return;
    }
    printTriangle(n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

void printOpositeTriangles(int n) {
    if (n <= 0) {
        return;
    }

    for (int i = 0; i < n; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
    printOpositeTriangles(n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

void printRuler(int n) {
    if (n <= 0) {
        return;
    }
    printRuler(n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << "-";
    }
    std::cout << "\n";
    printRuler(n - 1);
}

int main() {
    printTriangle(4);
    std::cout << std::endl;
    printOpositeTriangles(4);
    std::cout << std::endl;
    printRuler(4);
}