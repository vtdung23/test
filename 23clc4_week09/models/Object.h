#pragma once
#include <string>
using namespace std;

/// @brief Lớp cơ sở cho mọi lớp
class Object {
public:
    /// @brief Biểu diễn dạng chuỗi của đối tượng
    /// @return Chuỗi mô tả đối tượng
    virtual string toString() = 0;

    virtual ~Object() = default;
};