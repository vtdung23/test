#include "CircleParser.h"
#include <regex>
using namespace std;

#include "../../models/Circle.h"

Object* CircleParser::parse(string line) {
    regex pattern("Circle radius=(\\d+)");
    smatch matches;
    regex_search(line, matches, pattern);

    float radius = stoi(matches[1]);

    return new Circle(radius);
}

string CircleParser::toString() {
    return "CircleParser";
}