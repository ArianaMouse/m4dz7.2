#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B, const std::string& name)
    : Quadrilateral(a, b, a, b, A, B, A, B, name) {
}

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrilateral(a, b, a, b, A, B, A, B, "Параллелограмм") {
}