#include "main.h"
#include <iostream>
#include <string>
using namespace std;

#include "models/Rectangle.h"
#include "models/Square.h"
#include "models/Circle.h"

#include "services/data-access/MockDao.h"
#include "services/data-access/RealDao.h"

int main() {
    IDao* dao = new RealDao();
    vector<IShape*> shapes = dao->getAll();

    for (IShape* shape : shapes) {
        cout << shape->toString()
             << " Chu vi = " << shape->perimeter()
             << " Dien tich = " << shape->area() << "\n";
    }

    // Luu vao file xml
    dao->save(shapes);
    cout << "Da Luu vao file xml\n";

    cout << "\n\n";
    return 0;
}