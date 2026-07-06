#pragma once
#include "Quadrilateral.h"

class GEOM_API Rectangle : public Quadrilateral {
public:
    Rectangle(double a, double b);
    std::string type() const override;
};