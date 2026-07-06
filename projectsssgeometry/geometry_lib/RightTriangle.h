#pragma once
#include "Triangle.h"

class GEOM_API RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c);
    std::string type() const override;
};