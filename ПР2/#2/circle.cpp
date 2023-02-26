#include "Circle.h"
#include <cmath>


Circle::Circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

void Circle::set_circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

float Circle::area() {
    return 3.14 * radius * radius;
}

bool Circle::triangle_around(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    return (radius >= ((a + b + c) / (4 * S)));
}

bool Circle::triangle_in(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    return (radius <= S / p);
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
    double distance = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));

    return (distance < (r + radius));
}
