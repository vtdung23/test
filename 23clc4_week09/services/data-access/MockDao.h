#pragma once

#include <vector>
using namespace std;

#include "../../models/IShape.h"
#include "../../models/Rectangle.h"
#include "../../models/Square.h"
#include "../../models/Circle.h"
#include "IDao.h"

/// @brief Lớp truy cập dữ liệu giả
class MockDao: public IDao {
public:
    /// @brief Lấy danh sách các đối tượng hình học đang có
    /// @return Mảng các đối tượng hình học giả được code cứng
    vector<IShape*> getAll() {
        vector<IShape*> shapes = {
            new Circle(10),
            new Rectangle(3, 4),
            new Square(5),
            new Circle(12),
            new Rectangle(4, 4),
            new Square(6),
            new Square(7),
        };
        return shapes;
    }
};