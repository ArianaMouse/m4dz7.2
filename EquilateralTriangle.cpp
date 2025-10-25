#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle(side, side, side, 60, 60, 60, "Равносторонний треугольник") {

    if (a != b || b != c) {
        throw FigureError("В равностороннем треугольнике все стороны должны быть равны");
    }
    if (A != 60 || B != 60 || C != 60) {
        throw FigureError("В равностороннем треугольнике все углы должны быть 60 градусов");
    }
}

