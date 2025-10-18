#include "Triangle.h"



Triangle::Triangle(double a, double b, double c, double A, double B, double C, const std::string& name)
    : Figure(name), a(a), b(b), c(c), A(A), B(B), C(C) {
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