#include <iostream>
#include "CustomCast.hpp"

std::string	findType(std::string literal) {
    if (literal == "-inf" || literal == "+inf" || literal == "nan")
        return ("double");
    else if (literal.length() >= 3 && literal.at(literal.length() - 1) == 'f')
        return("float");
    else if (literal.length() > 2 && literal.find('.') != std::string::npos)
        return ("double");
    else if (literal.length() == 1)
    {
        char c = literal.at(0);
        if (isdigit(c))
            return ("int");
        else if (isalpha(c))
            return ("char");
        else
            return ("invalid");
    }
    else
        return ("no_format");
}


int main(int ac, char const **av)
{
    if (ac != 2)
    {
        std::cout << "convert: error: bad arguments" << std::endl;
    }
    else
    {
        std::string input = static_cast<std::string>(av[1]);
        std::string type = findType(input);
        CustomCast cast(type, input);
    }
    return (0);
}