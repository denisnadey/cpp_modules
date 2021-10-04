//
// Created by Matthos Denys on 28/05/2021.
//



#include "Fixed.hpp"

Fixed::Fixed() {
 std::cout << "Default constructor called" << std::endl;
    this->_point_float = 0;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    operator=(copy);
}

Fixed::~Fixed() {
    std::cout << "Default constructor destroyed" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
    {
        this->_point_float = src._point_float;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_point_float;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits called" << std::endl;
    this->_point_float = raw;
}



