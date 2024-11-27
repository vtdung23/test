#pragma once
#include <map> // unordered_map
using namespace std;

#include "../models/Object.h"

/// @brief Lớp Factory dùng để tạo ra các đối tượng khác nhau
class Factory: public Object {
private:
    /// @brief Cấu hình các kiểu cần tạo
    static void _config();

public:
    string toString() override;

    /// @brief  Lưu tên kiểu cần lấy, ví dụ "Rectangle" => new Rectangle
    // inline static map<string, Object*> _types; 
    // static Object* getType(string type);
    // static void _registerType(string type);

    // /// @brief Lưu tên dịch vụ cần lấy, ví dụ "IDao" => MockDao / TextDao tùy cấu hình
    // inline static map<string, Object*> _services;
    // static Object* getService(string type);
    // static void _registerService(string type, Object* service);

    /// @brief Lưu tên dịch vụ ứng với kiểu, ví dụ "Rectangle" => RectangleParser
    inline static map<string, Object*> _servicesForType;
    static void _registerServiceForType(string type, Object* service);
    static Object* getServiceForType(string type);
};