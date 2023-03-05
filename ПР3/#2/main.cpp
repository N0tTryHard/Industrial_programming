#include "rational.h"
#include "iostream"


int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    rational *A = new rational;

    for (int i = 0; i < n; i++) {
        int a, b;

        std::cout << "\nВведите числитель и знаменатель " << i + 1 << " дроби через пробел:\n";
        std::cin >> a >> b;

        A[i].set(a, b);
    }

    std::cout << "Введенные дроби:\n";

    for (int i = 0; i < n; i++) {
        A[i].show();
        std::cout << '\n';
    }

    delete[] A;
}