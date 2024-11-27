#pragma once

#include <string>
using namespace std;

#include "IConverter.h"

/// @brief Chuyển đổi hình vuông sang chuỗi xml
class SquareToXmlConverter: public IConverter {
public:
    /// @brief Chuyển đổi đối tượng sang dạng xml
    /// @param source Hình vuông nguồn
    /// @return Chuỗi biểu diễn hình vuông dạng xml
    string convert (Object* source) override;

    string toString() override;
};