#include "Rhombus.h"

Rhombus::Rhombus(double side, double A, double B)
    : Parallelogram(side, side, A, B, "Ромб") {

    if (std::abs(C - 90) > 0.001) {
        throw FigureError("Угол C должен быть равен 90 градусов");
    }
}