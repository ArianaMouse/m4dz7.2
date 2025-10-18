#pragma once

#include <iostream> 
#include <string>

class Figure {
protected:
    std::string name;

    //Защищённый конструктор для наследников.
    Figure(const std::string& figure_name);

public:
    //Название фигур.
    std::string get_name() const;
};