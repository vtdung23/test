#include "CircleToXmlConverter.h"
#include <format>
using namespace std;

#include "../../models/Circle.h"

string CircleToXmlConverter::convert(Object* source) {
    Circle* shape = dynamic_cast<Circle*>(source);
    string xml = format(
        "<Circle Radius=\"{}\"/>",
        shape->radius()
    );
    return xml;
}

string CircleToXmlConverter::toString() {
    return "CircleToXmlConverter";
}