#include "RectangleToXmlConverter.h"
#include <format>
using namespace std;

#include "../../models/Rectangle.h"

string RectangleToXmlConverter::convert(Object* source) {
    Rectangle* rectangle = dynamic_cast<Rectangle*>(source);
    string xml = format(
        "<Rectangle Width=\"{}\" Height=\"{}\" />",
        rectangle->width(), rectangle->height()
    );
    return xml;
}

string RectangleToXmlConverter::toString() {
    return "RectangleToXmlConverter";
}