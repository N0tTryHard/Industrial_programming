//
// Created by Господин on 19.03.2023.
//

#include "Cone.h"
#include <iostream>
#include <cmath>

Cone::Cone() {
    x = y = z = radius = height = 1;
}

Cone::Cone(double _radius, double _height) {
    x = y = z = 0;
    radius = _radius;
    height = _height;
}

Cone::Cone(double _x, double _y, double _z, double _radius, double _height) {
    x = _x;
    y = _y;
    z = _z;
    radius = _radius;
    height = _height;
}

void Cone::Set(double _x, double _y, double _z, double _radius, double _height) {
    x = _x;
    y = _y;
    z = _z;
    radius = _radius;
    height = _height;
}

void Cone::Print() {
    std::cout << "\nКоординаты центра основания: " << x << ", " << y << ", " << z << '\n';
    std::cout << "Радиус основания: " << radius << '\n';
    std::cout << "Высота конуса: " << height << '\n';
}

double Cone::Area() {
    double l = sqrt(radius * radius + height * height);

    return M_PI * radius * l + M_PI * radius * radius;
}

double Cone::Volume() {
    return M_PI * radius * radius * height / 3;
}
