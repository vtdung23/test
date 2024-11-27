#pragma once

#include <string>
using namespace std;

#include "IConverter.h"

/// @brief Chuyển đổi hình chữ nhật sang chuỗi xml
class CircleToXmlConverter: public IConverter {
public:
    /// @brief Chuyển đổi đối tượng sang dạng xml
    /// @param source Hình tròn nguồn
    /// @return Chuỗi biểu diễn hình tròn dạng xml
    string convert (Object* source) override;

    string toString() override;
};