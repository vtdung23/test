#pragma once

#include "../../models/Object.h"

/// @brief Interface cho việc parse dữ liệu từ string thành object
class IParsable:public Object {
public:
    /// @brief Chuyển đổi chuỗi thành đối tượng
    /// @param line Chuỗi chứa dữ liệu
    /// @return Đối tượng đã được chuyển đổi
    virtual Object* parse(string line) = 0;
};