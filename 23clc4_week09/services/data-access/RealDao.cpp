#include "RealDao.h"

#include <fstream>
#include <iostream>
#include <string>
#include <format>
using namespace std;

#include "../Factory.h"
#include "../business/IParsable.h"
#include "../ui/IConverter.h"
#include "../ui/RectangleToXmlConverter.h"
#include "../ui/CircleToXmlConverter.h"
#include "../ui/SquareToXmlConverter.h"

vector<IShape*> RealDao::getAll() {
    vector<IShape*> shapes;

    string input = "/workspaces/codespaces-blank/23clc4_week09/debug/shapes.txt";
    ifstream reader;
    reader.open(input, ios::in);

    // TODO: kiểm tra xem file có tồn tại không
    if (reader.good()) {
        cout << "File opened successfully\n";
    } else {
        cout << "File not found\n";
        return shapes;
    }

    string line = "";
    getline(reader, line);
    int count = stoi(line);

    for (int i = 0; i < count; i++) {
        getline(reader, line);

        // 1. Trích xuất từ đầu tiên
        string type = _firstWord(line);

        // 2. Dựa trên từ đầu tiên, lựa chọn parser tương ứng
        IParsable* parser = nullptr;
        parser = dynamic_cast<IParsable*>(Factory::getServiceForType(type));

        // 3. Parse dòng thành hình
        if (parser != nullptr) {
            IShape* shape = dynamic_cast<IShape*> (parser->parse(line));

            // 4. Đưa hình đã parse vào mảng
            shapes.push_back(shape);
        }        
    }

    reader.close();
    return shapes;
}

// TODO: Dùng thuật toán tách từ siêu cấp hơn
string RealDao::_firstWord(string line) {
    string word = "";
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == ' ') {
            break;
        }
        word += line[i];
    }
    return word;
}


void RealDao::save(vector<IShape*> shapes) {
    // Luu ra xml 
    string output = "/workspaces/codespaces-blank/23clc4_week09/debug/shapes.xml";
    ofstream writer;
    writer.open(output, ios::out);

    writer << format(
        "<Shapes Total=\"{}\" >\n",
        shapes.size()
    );

    for(auto shape: shapes) {
        // TODO: Nâng cấp siêu hạng

        // Ẩn sau: design pattern Visitor
        IConverter* converter = Factory::getServiceForType(shape->getType());

        string line = converter->convert(shape);
        writer << " " << line << endl;
    }

    writer << "</Shapes>";
    writer.close();
}