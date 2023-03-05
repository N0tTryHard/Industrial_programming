#include "iostream"
#include "rational.h"


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

    std::cout << "Введенные дроби:'\n";
    for (int i = 0; i < n; i++) {
        A[i].show();
        std::cout << '\n';
    }

    //Демонстрация работы перегрузок операций
    int first_select, second_select;
    if (n > 1) {
        std::cout << "Какие дроби сложить?\n";
        std::cin >> first_select >> second_select;
        rational sum = A[first_select] + A[second_select];
        sum.show();

        std::cout << "\n\nКакие дроби вычесть?\n";
        std::cin >> first_select >> second_select;
        rational diff = A[first_select] - A[second_select];
        diff.show();

        std::cout << "\n\nКакие дроби проверить на равенство?\n";
        std::cin >> first_select >> second_select;
        bool equal = A[first_select] == A[second_select];
        std::cout << (equal ? "Дроби равны" : "Дроби не равны");

        std::cout << "\n\nКакие дроби сравнить?\n";
        std::cin >> first_select >> second_select;
        rational max = A[first_select] > A[second_select];
        std::cout << "Наибольшая дробь: ";
        max.show();
    }

    std::cout << "\n\nКакую дробь инкрементировать?\n";
    std::cin >> first_select;
    A[first_select]++;
    A[first_select].show();
    std::cout << '\n';

    delete[] A;
}