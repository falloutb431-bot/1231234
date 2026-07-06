#pragma once
#include "Triangle.h"

class GEOM_API IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double c);
    std::string type() const override;
};