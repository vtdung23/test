#pragma once

#include "IParsable.h"

/// @brief Parser cho hình tròn
class CircleParser: public IParsable {
public:
    /// @brief Chuyển đổi chuỗi thành đối tượng hình tròn
    Object* parse(string line) override;
    string toString() override;
};