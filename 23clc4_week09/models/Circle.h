#pragma once
#include "IShape.h"

/// @brief Lớp hình tròn
class Circle: public IShape {
public:
    inline static const float PI = 3.141f;
public:
    /// @brief Hàm khởi tạo
    /// @param radius bán kính hình tròn
    Circle(double radius);

    /// @brief Hàm lấy chu vi hình tròn
    float perimeter() override;

    /// @brief Hàm lấy diện tích hình tròn
    float area() override;

    /// @brief Biểu diễn chuỗi của hình tròn
    string toString() override;

    float radius();
private:
    /// @brief Bán kính hình tròn
    float _radius;
};