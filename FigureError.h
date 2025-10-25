#pragma once

#include <iostream> 
#include <exception>
#include <stdexcept>

class FigureError : public std::domain_error {
public:
    explicit FigureError(const std::string& message) : std::domain_error(message) {}
};