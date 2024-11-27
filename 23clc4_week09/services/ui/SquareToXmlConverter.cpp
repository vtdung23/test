#include "SquareToXmlConverter.h"
#include <format>
using namespace std;

#include "../../models/Square.h"

string SquareToXmlConverter::convert(Object* source) {
    Square* shape = dynamic_cast<Square*>(source);
    string xml = format(
        "<Square Side=\"{}\" />",
        shape->side()
    );
    return xml;
}

string SquareToXmlConverter::toString() {
    return "SquareToXmlConverter";
}