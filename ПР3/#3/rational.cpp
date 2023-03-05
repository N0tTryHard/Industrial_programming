//
// Created by Господин on 05.03.2023.
//


#include "rational.h"
#include "iostream"


int nod(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

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
        int rat = nod(a, b);
        if (rat != 1) {
            a /= rat;
            b /= rat;
        }
        while (a > b && b != 1) {
            a %= b;
        }
        rat = nod(b, a);
        if (rat != 1) {
            b /= rat;
            a /= rat;
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
        int rat = nod(a, b);
        if (rat != 1) {
            a /= rat;
            b /= rat;
        }
        while (a > b && b != 1) {
            a %= b;
        }
        rat = nod(b, a);
        if (rat != 1) {
            b /= rat;
            a /= rat;
        }
    }
}

void rational::show() {
    if (exist) std::cout << a << '/' << b;
    else std::cout << "Дроби не существует";
}

int rational::get_a() {
    return a;
}

int rational::get_b() {
    return b;
}


rational rational::operator+(rational B) {
    rational res(a * B.get_b() + B.get_a() * b, b * B.get_b());
    return res;
}

rational operator-(rational A, rational B) {
    rational res(A.a * B.b - B.a * A.b, A.b * B.b);
    return res;
}

rational rational::operator++(int) {
    a++;
    return *this;
}

rational rational::operator=(rational A) {
    a = A.get_a();
    b = A.get_b();
    return *this;
}

bool operator==(rational A, rational B) {
    return (A.get_a() == B.get_a() && A.get_b() == B.get_b());
}

rational operator>(rational A, rational B) {
    bool bigger = A.get_a() * B.get_b() > B.get_a() * A.get_b();
    return (bigger ? A : B);
}