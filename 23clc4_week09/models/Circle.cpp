#include "Circle.h"

Circle::Circle(double radius) {
    _radius = radius;
}

float Circle::perimeter() {
    return 2 * PI * _radius;
}

float Circle::area() {
    return PI * _radius * _radius;
}

string Circle::toString() {
    return "Circle";
}

float Circle::radius() {
    return _radius;
}