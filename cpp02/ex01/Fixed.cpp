//
// Created by Matthos Denys on 5/29/21.
//


#include "Fixed.hpp"


Fixed::~Fixed() {
    std::cout << "Default constructor destroyed" << std::endl;
}

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = fixed._value;
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits called" << std::endl;
    this->_value = raw;
}

float Fixed::toFloat() const
{
    return ((float)this->_value / (float)(1 << _bit));
}

int Fixed::toInt() const
{
    return (int)(this->_value >> _bit);
}

Fixed::Fixed(const float value)
{
    this->_value = (int)( roundf(value * (float)(1 << _bit)) );
}

Fixed::Fixed(const int value)
{
   this->_value = (value << _bit);
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = fixed._value;
}

std::ostream& operator <<(std::ostream& out, const Fixed& src) {
    out << src.toFloat();
    return out;
}