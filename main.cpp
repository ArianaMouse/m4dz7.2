#include <iostream>
#include <string>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"

//Вывод информации.
void print_info(const Triangle* triangle) {
    triangle->printInfo();
}

void print_info(const Quadrilateral* quadrilateral) {
    quadrilateral->printInfo();
}

int main() {
    setlocale(LC_ALL, "Rus");

    //Воплощение фигур в жизнь.
    Triangle triangle(3, 4, 5, 30, 60, 90, "Треугольник");
    RightTriangle rightTriangle(3, 4, 5, 30, 60);
    IsoscelesTriangle isoscelesTriangle(5, 6, 50, 80);
    EquilateralTriangle equilateralTriangle(4);

    Quadrilateral quadrilateral(2, 3, 4, 5, 80, 100, 90, 90, "Четырехугольник");
    Parallelogram parallelogram(4, 6, 60, 120);
    Rectangle rectangle(4, 6);
    Rhombus rhombus(5, 60, 120);
    Square square(4);

    std::cout << "Информация о фигурах:\n\n";

    print_info(&triangle);
    print_info(&rightTriangle);
    print_info(&isoscelesTriangle);
    print_info(&equilateralTriangle);

    print_info(&quadrilateral);
    print_info(&parallelogram);
    print_info(&rectangle);
    print_info(&rhombus);
    print_info(&square);

    return 0;
}