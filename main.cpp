#include <iostream>
#include "circle.h"


int main() {
    float x1, y1, r1;

    std::cout << "Первая окружность\n";
    std::cout << "Введите координаты центра, радиус:\n";

    std::cin >> x1 >> y1 >> r1;
    Circle A(r1, x1, y1);

    float x2, y2, r2;

    std::cout << "\nВторая окружность\n";
    std::cout << "Введите координаты центра, радиус:\n";

    std::cin >> x2 >> y2 >> r2;
    Circle B(r2, x2, y2);

    float x3, y3, r3;

    std::cout << "\nТретья окружность\n";
    std::cout << "Введите координаты центра, радиус:\n";

    std::cin >> x3 >> y3 >> r3;
    Circle C(r3, x3, y3);

    float a, b, c;

    std::cout << "Введите длины сторон треугольника:\n";
    std::cin >> a >> b >> c;

    //работа методов для трёх окружностей

    std::cout << "\n\nДля первой окружности:\n\n";

    std::cout << "Площадь: " << A.area() << '\n';
    std::cout << "Треугольник можно вписать: " << A.triangle_in(a, b, c) << '\n';
    std::cout << "Треугольник можно описать: " << A.triangle_around(a, b, c) << '\n';
    std::cout << "Окружность пересекается:";
    std::cout << "\nСо второй: " << A.check_circle(r2, x2, y2);
    std::cout << "\nС третьей: " << A.check_circle(r3, x3, y3);

    std::cout << "\n\nДля второй окружности:\n\n";

    std::cout << "Площадь: " << B.area() << '\n';
    std::cout << "Треугольник можно вписать: " << B.triangle_in(a, b, c) << '\n';
    std::cout << "Треугольник можно описать: " << B.triangle_around(a, b, c) << '\n';
    std::cout << "Окружность пересекается:";
    std::cout << "\nС первой: " << B.check_circle(r1, x1, y1);
    std::cout << "\nС третьей: " << B.check_circle(r3, x3, y3);

    std::cout << "\n\nДля третьей окружности:\n\n";

    std::cout << "Площадь: " << C.area() << '\n';
    std::cout << "Треугольник можно вписать: " << C.triangle_in(a, b, c) << '\n';
    std::cout << "Треугольник можно описать: " << C.triangle_around(a, b, c) << '\n';
    std::cout << "Окружность пересекается:";
    std::cout << "\nС первой: " << C.check_circle(r1, x1, y1);
    std::cout << "\nСо второй: " << C.check_circle(r2, x2, y2);
}