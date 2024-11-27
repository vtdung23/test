#include "RectangleParser.h"
#include <regex>
using namespace std;

#include "../../models/Rectangle.h"

Object* RectangleParser::parse(string line) {
    regex pattern("Rectangle a=(\\d+), b=(\\d+)");
    smatch matches;
    regex_search(line, matches, pattern);

    float width = stoi(matches[1]);
    float height = stoi(matches[2]);

    return new Rectangle(width, height);
}

string RectangleParser::toString() {
    return "RectangleParser";
}