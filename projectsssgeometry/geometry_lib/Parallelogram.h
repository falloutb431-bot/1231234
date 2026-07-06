#pragma once
#include "Quadrilateral.h"

class GEOM_API Parallelogram : public Quadrilateral {
public:
    Parallelogram(double a, double b);
    std::string type() const override;
};