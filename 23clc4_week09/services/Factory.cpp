#include "Factory.h"

#include "../models/IShape.h"
#include "../services/business/RectangleParser.h"
#include "../services/business/SquareParser.h"
#include "../services/business/CircleParser.h"


string Factory::toString() {
    return "Factory";
}

void Factory::_config() {
    _registerServiceForType("Rectangle", new RectangleParser()); // IParsable
    _registerServiceForType("Square", new SquareParser());
    _registerServiceForType("Circle", new CircleParser());

    // TODO: Tạo ra mục lục cho mục lục
    // _registerServiceForType("Rectangle", new RectangleToXmlConverter()); // IConverter
    // _registerServiceForType("Square", new SquareToXmlConverter());
    // _registerServiceForType("Circle", new CircleToXmlConverter());
}

void Factory::_registerServiceForType(string type, Object* service) {
    _servicesForType.insert({type, service});
}

Object* Factory::getServiceForType(string type) {
    if (_servicesForType.size() == 0) {
        _config();
    }
    return _servicesForType[type];
}