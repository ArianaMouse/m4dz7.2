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
#include "FigureError.h"

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
    std::cout << "Информация о фигурах:\n\n";

    try {
        Triangle triangle(3, 4, 5, 31, 60, 90, "Треугольник");
        print_info(&triangle);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания треугольника: " << e.what() << "\n\n";
    }

    try {
        RightTriangle rightTriangle(3, 4, 5, 30, 60);
        print_info(&rightTriangle);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания прямоугольного треугольника: " << e.what() << "\n\n";
    }

    try {
        IsoscelesTriangle isoscelesTriangle(5, 6, 51, 80);
        print_info(&isoscelesTriangle);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания равнобедренного треугольника: " << e.what() << "\n\n";
    }

    try {
        EquilateralTriangle equilateralTriangle(4);
        print_info(&equilateralTriangle);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания равностороннего треугольника: " << e.what() << "\n\n";
    }



    try {
        Quadrilateral quadrilateral(2, 3, 4, 5, 80, 100, 90, 90, "Четырехугольник");
        print_info(&quadrilateral);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания четырехугольника: " << e.what() << "\n\n";
    }

    try {
        Parallelogram parallelogram(4, 6, 60, 120);
        print_info(&parallelogram);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания параллелограмма: " << e.what() << "\n\n";
    }

    try {
        Rectangle rectangle(4, 6);
        print_info(&rectangle);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания прямоугольникка: " << e.what() << "\n\n";
    }

    try {
        Rhombus rhombus(5, 60, 120);
        print_info(&rhombus);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания ромба: " << e.what() << "\n\n";
    }

    try {
        Square square(4);
        print_info(&square);
    }
    catch (const FigureError& e) {
        std::cerr << "Ошибка создания квадрата: " << e.what() << "\n\n";
    }

    return 0;
}