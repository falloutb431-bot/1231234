#pragma once
#include "Shape.h"

class GEOM_API Triangle : public Shape {
protected:
    double a_, b_, c_;
    double A_, B_, C_;
public:
    Triangle(double a, double b, double c, double A, double B, double C);
    std::string type() const override;
    std::string sides() const override;
    std::string angles() const override;
};