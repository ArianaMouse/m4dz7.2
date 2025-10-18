#pragma once

#include "Figure.h"

//Треугольник.
class Triangle : public Figure {
protected:
    //Стороны.
    double a;
    double b;
    double c;

    //Углы.
    double A;
    double B;
    double C;


public:
    Triangle(double a, double b, double c, double A, double B, double C, const std::string& name);

    double getA() const;
    double getB() const;
    double getC() const;
    double getAngleA() const;
    double getAngleB() const;
    double getAngleC() const;

    //Вывод всех треугольчиков.
    void printInfo() const;
};