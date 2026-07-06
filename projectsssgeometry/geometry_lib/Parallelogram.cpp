#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b)
    : Quadrilateral(a, b, a, b, 30, 40, 30, 40) {
}

std::string Parallelogram::type() const { return "Параллелограмм"; }