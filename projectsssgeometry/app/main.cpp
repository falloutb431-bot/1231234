#include <iostream>
#include "../geometry_lib/Triangle.h"
#include "../geometry_lib/RightTriangle.h"
#include "../geometry_lib/IsoscelesTriangle.h"
#include "../geometry_lib/EquilateralTriangle.h"
#include "../geometry_lib/Quadrilateral.h"
#include "../geometry_lib/Rectangle.h"
#include "../geometry_lib/Square.h"
#include "../geometry_lib/Parallelogram.h"
#include "../geometry_lib/Rhombus.h"

void print(const Shape& s) {
    std::cout << s.type() << ":\n";
    std::cout << s.sides() << "\n";
    std::cout << s.angles() << "\n\n";
}

int main() {
    // Треугольник
    Triangle t(10, 20, 30, 50, 60, 70);
    print(t);

    // Прямоугольный треугольник
    RightTriangle rt(10, 20, 30);
    print(rt);

    // Равнобедренный треугольник
    IsoscelesTriangle it(10, 20, 10);
    print(it);

    // Равносторонний треугольник
    EquilateralTriangle et(30);
    print(et);

    // Четырёхугольник
    Quadrilateral q(10, 20, 30, 40, 50, 60, 70, 80);
    print(q);

    // Прямоугольник
    Rectangle r(10, 20);
    print(r);

    // Квадрат
    Square sq(20);
    print(sq);

    // Параллелограмм
    Parallelogram p(20, 30);
    print(p);

    // Ромб
    Rhombus rh(30);
    print(rh);

    return 0;
}