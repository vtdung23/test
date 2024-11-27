#pragma once

#include "IParsable.h"

/// @brief Parser cho hình vuông
class SquareParser: public IParsable {
public:
    /// @brief Chuyển đổi chuỗi thành đối tượng hình vuông
    Object* parse(string line) override;
    string toString() override;
};