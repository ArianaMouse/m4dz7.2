#include "Square.h"

Square::Square(double side) : Rectangle(side, side) {
    name = "Квадрат";

    if (a != b || b != c || c != d) {
        throw FigureError("В квадрате все стороны должны быть равны");
    }
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw FigureError("В квадрате все углы должны быть 90 градусов");
    }
}