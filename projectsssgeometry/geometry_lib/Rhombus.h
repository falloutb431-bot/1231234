#pragma once
#include "Parallelogram.h"

class GEOM_API Rhombus : public Parallelogram {
public:
    explicit Rhombus(double side);
    std::string type() const override;
};