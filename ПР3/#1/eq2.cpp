//
// Created by Господин on 05.03.2023.
//

#include <iostream>
#include <cmath>
#include "eq2.h"


eq2::eq2(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;

    D = b * b - 4 * a * c;
}

void eq2::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
}

double eq2::find_X() {
    if (D < 0) {
        std::cout << "\nКорней нет\n";
        return 0;
    }
    double x1, x2;
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    return (x1 > x2 ? x1 : x2);
}

double eq2::find_Y(double x1) {
    return (x1 * x1 * a + x1 * b + c);
}

double eq2::get_a() {
    return a;
}

double eq2::get_b() {
    return b;
}

double eq2::get_c() {
    return c;
}

void eq2::print() {
    std::cout << a << "x^2 ";
    if (b > 0) std::cout << '+';
    std::cout << b << "x ";
    if (c > 0) std::cout << '+';
    std::cout << c << '\n';
}

eq2 operator+(eq2 A, eq2 B) {
    eq2 res(A.get_a() + B.get_a(), A.get_b() + B.get_b(), A.get_c() + B.get_c());
    return res;
}



