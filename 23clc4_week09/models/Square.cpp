#include "Square.h"

Square::Square(double side) {
    _side = side;
}

float Square::area() {
    return _side * _side;
}

float Square::perimeter() {
    return 4 * _side;
}

string Square::toString() {
    return "Square";
}

float Square::side() {
    return _side;
}