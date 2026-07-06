#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b, double c)
    : Triangle(a, b, c, 50, 60, 90) {
} // пример углов, как в задании

std::string RightTriangle::type() const { return "Прямоугольный треугольник"; }