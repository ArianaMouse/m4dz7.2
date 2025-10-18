#pragma once

#include "Figure.h"

//Четырёхугольник.
class Quadrilateral : public Figure {
protected:
    //Стороны.
    double a;
    double b;
    double c;
    double d;

    //Углы.
    double A;
    double B;
    double C;
    double D;

public:
    Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D, const std::string& name);

    double getA() const;
    double getB() const;
    double getC() const;
    double getD() const;
    double getAngleA() const;
    double getAngleB() const;
    double getAngleC() const;
    double getAngleD() const;

    void printInfo() const;
};