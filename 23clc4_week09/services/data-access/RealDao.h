#pragma once

#include "IDao.h"

/// @brief Lớp truy cập dữ liệu từ file text
class RealDao: public IDao {
public:
    /// @brief Lấy danh sách các đối tượng hình học đang được lưu trữ trong file text
    /// @return Mảng các đối tượng hình học
    vector<IShape*> getAll() override;

    /// @brief Lưu danh sách các đối tượng hình học vào file 
    void save(vector<IShape*> shapes) override;
private:
    /// @brief Trích xuất từ đầu tiên của dòng
    string _firstWord(string line);
};