#pragma once
#include <vector>
using namespace std;

#include "../../models/IShape.h"

/// @brief Giao diện cho các lớp truy xuất dữ liệu
class IDao {
public:
    /// @brief Lấy danh sách các đối tượng hình học đang được lưu trữ
    /// @return Mảng các đối tượng hình học
    virtual vector<IShape*> getAll() = 0;

    /// @brief Lưu danh sách các đối tượng hình học vào file
    virtual void save(vector<IShape*> shapes) = 0;
};