#pragma once
#include "Triangle.h"

class GEOM_API EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side);
    std::string type() const override;
};