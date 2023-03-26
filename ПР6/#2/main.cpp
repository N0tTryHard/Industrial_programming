#include "CutCone.h"
#include <iostream>


int main() {
    int n;
    std::cout << "Введите количество усечённых конусов:\n";
    std::cin >> n;

    CutCone *A = new CutCone[n];

    for (int i = 0; i < n; i++) {
        std::cout << "\n\nВведите усеченный конус: " << i + 1 << '\n';
        std::cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        std::cout << A[i];
    }

    if (n > 1) {
        int a, b;
        std::cout << "Какие конусы нужно сравнить?\n";
        std::cin >> a >> b;

        std::cout << "первый равен второму? \t-\t " << (A[a] == A[b]) << '\n';
        std::cout << "первый меньше второго? \t-\t " << (A[a] < A[b]) << '\n';
        std::cout << "первый больше второго? \t-\t " << (A[a] > A[b]) << '\n';
        std::cout << "первый не больше второго? \t-\t " << (A[a] <= A[b]) << '\n';
        std::cout << "первый не меньше второго? \t-\t " << (A[a] >= A[b]) << '\n';
    }

    delete[] A;

    Cone cone1;
    std::cout << "\n\nВведите конус:\n";

    int x, y, z;
    std::cout << "Введите координаты центра основания:\n";
    std::cin >> x >> y >> z;

    int r;
    std::cout << "Введите радиус онования конуса:\n";
    std::cin >> r;

    int h;
    std::cout << "Введите высоту конуса:\n";
    std::cin >> h;

    cone1.Set(x, y, z, r, h);
    std::cout << "Конус:\n";
    cone1.Print();

    std::cout << "\n\nТри усеченных конуса, наследующих от одного конуса:\n";

    CutCone cCone1(x, y, z, r, 1, h);
    CutCone cCone2(x, y, z, r, 2, h);
    CutCone cCone3(x, y, z, r, 3, h);

    std::cout << cCone1 << cCone2 << cCone3;
}