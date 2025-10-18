#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D, const std::string& name)
    : Figure(name), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
}

double Quadrilateral::getA() const { return a; }
double Quadrilateral::getB() const { return b; }
double Quadrilateral::getC() const { return c; }
double Quadrilateral::getD() const { return d; }
double Quadrilateral::getAngleA() const { return A; }
double Quadrilateral::getAngleB() const { return B; }
double Quadrilateral::getAngleC() const { return C; }
double Quadrilateral::getAngleD() const { return D; }

void Quadrilateral::printInfo() const {
    std::cout << name << ":\n";
    std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << "\n";
    std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << "\n\n";
}