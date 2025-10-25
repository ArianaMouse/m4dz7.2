#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A, "Равнобедренный треугольник") {

    if (a != c) {
        throw FigureError("В равнобедренном треугольнике стороны a и c должны быть равны");
    }
    if (A != C) {
        throw FigureError("В равнобедренном треугольнике углы A и C должны быть равны");
    }
}