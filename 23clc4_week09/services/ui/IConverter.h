#pragma once

#include "../../models/Object.h"

/// @brief Interface chuyển đổi dữ liệu
class IConverter: public Object {
public:
    /// @brief Chuyển đổi dữ liệu từ một dạng sang dạng khác
    /// @param source Dữ liệu nguồn
    /// @return Dữ liệu mới đã được chuyển đổi
    virtual string convert (Object* source) = 0;

    // TODO: Khi đã lên cao thủ, hãy quay lại và cài đặt hàm này
    // TODO: Tạo ra wrapper cho các kiểu dữ liệu cơ bản
    // TODO: Tạo ra wrapper tổng quát bằng template
    // virtual Object* convert (Object* source) = 0;
};