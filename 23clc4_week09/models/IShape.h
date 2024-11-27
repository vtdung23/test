#pragma once

#include "Object.h"

/// @brief Giao diện tổng quát cho các hình 
class IShape: public Object {
public:
    /// @brief Diện tích của hình
    virtual float area() = 0;

    /// @brief Chu vi của hình
    virtual float perimeter() = 0;
};