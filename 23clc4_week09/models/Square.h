#pragma once
#include "IShape.h"

/// @brief Lớp biểu diễn hình vuông
class Square: public IShape {
public:
    /// @brief Hàm khởi tạo hình vuông với độ dài cạnh
    /// @param side Độ dài cạnh
    Square(double side);

    /// @brief Diện tích hình vuông
    float area() override;

    /// @brief Chu vi hình vuông
    float perimeter() override;

    /// @brief Chuổi biểu diễn hình vuông
    string toString() override;

    float side();
private:
    /// @brief Độ dài cạnh hình vuông
    double _side;
};