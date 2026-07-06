#include "Triangle.h"
#include <sstream>

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a_(a), b_(b), c_(c), A_(A), B_(B), C_(C) {
}

std::string Triangle::type() const { return "Треугольник"; }

std::string Triangle::sides() const {
    std::ostringstream os;
    os << "Стороны: a=" << a_ << " b=" << b_ << " c=" << c_;
    return os.str();
}

std::string Triangle::angles() const {
    std::ostringstream os;
    os << "Углы: A=" << A_ << " B=" << B_ << " C=" << C_;
    return os.str();
}