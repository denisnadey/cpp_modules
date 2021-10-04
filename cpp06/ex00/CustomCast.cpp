//
// Created by Denis Nadey on 10.06.2021.
//

#include <iostream>
#include <iomanip>
#include "CustomCast.hpp"



CustomCast::CustomCast() {
}

CustomCast::~CustomCast() {
}

CustomCast::CustomCast(std::string& str, std::string& valuestring) {

    if (str == "no_format") {
         try {printByFormat(std::stoi(valuestring));}
        catch (...) {}
        }
    else if (str == "int")
    {
        try {printByFormat(std::stoi(valuestring));}
        catch (...) {}
    }
    else if (str == "float")
    {
        try {printByFormat(std::stof(valuestring));}
        catch (...) {}
    }
    else if (str == "double")
    {
        try {printByFormat(std::stod(valuestring));}
        catch (...) {}
    }
    else if (str == "char")
    {
        try {printByFormat(valuestring.at(0));}
        catch (...) {}
    }
}

void CustomCast::printByFormat(char value) const{
    std::cout << "char: '" << value << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}

void CustomCast::printByFormat(int value) const {
    if (value > 256 || value < 0)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(value))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    std::cout << "int: " << value << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}


void CustomCast::printByFormat(double value) const{
    if (value > 256 || value < 0)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(value))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    if (value > INT_MAX || value < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
}

void CustomCast::printByFormat(float value) const{
    if (value > 256 || value < 0)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(value))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    if (value > INT_MAX || value < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}
