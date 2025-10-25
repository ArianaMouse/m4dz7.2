#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B, const std::string& name)
    : Quadrilateral(a, b, a, b, A, B, A, B, name) {

    if (a != b || b != c || c != d) {
        throw FigureError("В ромбе все стороны должны быть равны");
    }
    if (A != C || B != D) {
        throw FigureError("В ромбе углы A,C и B,D должны быть попарно равны");
    }
}

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrilateral(a, b, a, b, A, B, A, B, "Параллелограмм") {
}