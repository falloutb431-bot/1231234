#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle(side, side, side, 60, 60, 60) {
}

std::string EquilateralTriangle::type() const { return "Равносторонний треугольник"; }