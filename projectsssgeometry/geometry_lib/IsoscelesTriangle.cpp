#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double c)
    : Triangle(a, b, c, 50, 60, 50) {
}

std::string IsoscelesTriangle::type() const { return "Равнобедренный треугольник"; }