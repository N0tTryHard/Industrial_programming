//
// Created by Господин on 05.03.2023.
//

#include "rational.h"
#include "iostream"

rational::rational() {
    a = 0;
    b = 0;
    exist = true;
}

rational::rational(int a1, int b1) {
    a = a1;
    b = b1;
    exist = true;
    if (b == 0) {
        a = 0;
        exist = false;
    }
    if (a == 0) {
        b = 0;
    }
    if (exist && a != 0) {
        if (a % b == 0) {
            a /= b;
            b /= b;
        }
        while (a > b && b != 1) {
            a %= b;
        }
        if (b % a == 0) {
            b /= a;
            a /= a;
        }
    }
}

void rational::set(int a1, int b1) {
    a = a1;
    b = b1;
    exist = true;
    if (b == 0) {
        a = 0;
        exist = false;
    }
    if (a == 0) {
        b = 0;
    }
    if (exist && a != 0) {
        if (a % b == 0) {
            a /= b;
            b /= b;
        }
        while (a > b && b != 1) {
            a %= b;
        }
        if (b % a == 0) {
            b /= a;
            a /= a;
        }
    }
}

void rational::show() {
    if (exist) std::cout << a << '/' << b;
    else std::cout << "Дроби не существует";
}