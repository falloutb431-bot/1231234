#include "Quadrilateral.h"
#include <sstream>

Quadrilateral::Quadrilateral(double a, double b, double c, double d,
    double A, double B, double C, double D)
    : a_(a), b_(b), c_(c), d_(d), A_(A), B_(B), C_(C), D_(D) {
}

std::string Quadrilateral::type() const { return "Четырёхугольник"; }

std::string Quadrilateral::sides() const {
    std::ostringstream os;
    os << "Стороны: a=" << a_ << " b=" << b_ << " c=" << c_ << " d=" << d_;
    return os.str();
}

std::string Quadrilateral::angles() const {
    std::ostringstream os;
    os << "Углы: A=" << A_ << " B=" << B_ << " C=" << C_ << " D=" << D_;
    return os.str();
}