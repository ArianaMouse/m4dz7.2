#include "Triangle.h"
#include "Figure.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C, const std::string& name)
    : Figure(name), a(a), b(b), c(c), A(A), B(B), C(C) {

    double sum_angeles = A + B + C;
    if (std::abs(sum_angeles - 180) > 0.001) {
        throw FigureError("Сумма углов должна быть 180 градусов.");
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        throw FigureError("Стороны должны быть положительными.");
    }

    std::cout << name << " (стороны " << a << ", " << b << ", " << c
        << "; углы " << A << ", " << B << ", " << C << ") создан" << std::endl;
}

double Triangle::getA() const { return a; }
double Triangle::getB() const { return b; }
double Triangle::getC() const { return c; }
double Triangle::getAngleA() const { return A; }
double Triangle::getAngleB() const { return B; }
double Triangle::getAngleC() const { return C; }

void Triangle::printInfo() const {
    std::cout << name << ":\n";
    std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << ":\n";
    std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << ":\n\n";
}