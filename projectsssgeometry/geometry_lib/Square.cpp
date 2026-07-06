#include "Square.h"

Square::Square(double side) : Rectangle(side, side) {}

std::string Square::type() const { return "Квадрат"; }