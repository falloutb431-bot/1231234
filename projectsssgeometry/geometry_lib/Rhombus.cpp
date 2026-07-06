#include "Rhombus.h"

Rhombus::Rhombus(double side) : Parallelogram(side, side) {}

std::string Rhombus::type() const { return "Ромб"; }