#include "SquareParser.h"
#include <regex>
using namespace std;

#include "../../models/Square.h"

Object* SquareParser::parse(string line) {
    regex pattern("Square side=(\\d+)");
    smatch matches;
    regex_search(line, matches, pattern);

    float side = stoi(matches[1]);

    return new Square(side);
}

string SquareParser::toString() {
    return "SquareParser";
}