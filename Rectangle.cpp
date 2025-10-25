#include "Rectangle.h"

Rectangle::Rectangle(double a, double b)
    : Parallelogram(a, b, 90, 90, "Прямоугольник") {

    if (a != c || b != d) {
        throw FigureError("В прямоугольнике стороны a,c и b,d должны быть попарно равны");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw FigureError("В прямоугольнике все углы должны быть 90 градусов");
    }
}