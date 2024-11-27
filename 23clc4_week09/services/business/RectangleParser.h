#pragma once

#include "IParsable.h"

/// @brief Parser cho hình chữ nhật
class RectangleParser: public IParsable {
public:
    /// @brief Chuyển đổi chuỗi thành đối tượng hình chữ nhật
    Object* parse(string line) override;
    string toString() override;
};