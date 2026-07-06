#pragma once
#include "Rectangle.h"

class GEOM_API Square : public Rectangle {
public:
    explicit Square(double side);
    std::string type() const override;
};
