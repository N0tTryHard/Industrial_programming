#include <iostream>
#include "eq2.h"


int main() {
    double a, b, c;

    std::cout << "Введите коэффициенты первого уравнения:\n";
    std::cin >> a >> b >> c;
    eq2 A(a, b, c);

    std::cout << "Введите коэффициенты второго уравнения:\n";
    std::cin >> a >> b >> c;
    eq2 B(a, b, c);

    double x1;
    std::cout << "\nВведите x1 для подстановки\n";
    std::cin >> x1;


    //Демонстрация работы методов
    double X = A.find_X();
    std::cout << "Наибольший корень первого уравнения: " << X << '\n';
    std::cout << "Значение первого многочлена при X = x1: " << A.find_Y(x1);
    std::cout << "\n\n";


    X = B.find_X();
    std::cout << "Наибольший корень второго уравнения: " << X << '\n';
    std::cout << "Значение второго многочлена при X = x1: " << B.find_Y(x1);
    std::cout << "\n\n";

    //Демонстрация работы перегрузки функции сложения
    eq2 C = A + B;

    std::cout << "Результат сложения многочленов:\n";
    C.print();
}