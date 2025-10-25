#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник") {

    if (std::abs(C - 90) > 0.001) {
        throw FigureError("Угол C должен быть равен 90 градусов.");
    }
}
