#pragma once

#include <string>
using namespace std;

#include "IConverter.h"

/// @brief Chuyển đổi hình chữ nhật sang chuỗi xml
class RectangleToXmlConverter: public IConverter {
public:
    /// @brief Chuyển đổi đối tượng sang dạng xml
    /// @param source Hình chữ nhật nguồn
    /// @return Chuỗi biểu diễn hình chữ nhật dạng xml
    string convert (Object* source) override;

    string toString() override;
};