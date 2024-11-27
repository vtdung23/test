#include "Rectangle.h"

 float Rectangle::area() {
    return _width * _height;
 }

float Rectangle::perimeter() {
    return 2 * (_width + _height);
}

string Rectangle::toString() {
    return "Rectangle";
}

Rectangle::Rectangle(float width, float height) {
    _width = width;
    _height = height;
}

 float Rectangle::width() {
    return _width;
 }

 float Rectangle::height() {
    return _height;
 }