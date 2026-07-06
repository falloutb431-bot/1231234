#pragma once
#include "Shape.h"

class GEOM_API Quadrilateral : public Shape {
protected:
    double a_, b_, c_, d_;
    double A_, B_, C_, D_;
public:
    Quadrilateral(double a, double b, double c, double d,
        double A, double B, double C, double D);
    std::string type() const override;
    std::string sides() const override;
    std::string angles() const override;
};