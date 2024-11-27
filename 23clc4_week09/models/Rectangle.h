#pragma once

#include "IShape.h"

/// @brief Hình chữ nhật
class Rectangle: public IShape {
public:
    /// @brief Diện tích hình chữ nhật
    float area() override;

    /// @brief Chu vi hình chữ nhật
    float perimeter() override;

    /// @brief Biểu diễn chuỗi của hình chữ nhật
    string toString() override;

    float width();
    float height();
public:
    /// @brief Hàm tạo hình chữ nhật
    /// @param width Độ rộng
    /// @param height Độ cao
    Rectangle(float width, float height);

private:
    float _width;
    float _height;
};