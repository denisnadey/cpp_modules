//
// Created by Matthos Denys on 6/3/21.
//

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(const Ice &other) : AMateria("ice") {
    *this = other;
}

Ice::Ice(const AMateria *other) : AMateria("ice") {
    this->_type = other->getType();
    this->_xp = other->getXP();
}

Ice::~Ice() {}

Ice&	Ice::operator =(const Ice& other) {
    this->_type = other.getType();
    this->_xp = other.getXP();
    return *this;
}

AMateria* Ice::clone() const {
    Ice* copy = new Ice();

    copy->_xp = this->_xp;
    copy->_type = this->_type;

    return copy;
}
void		Ice::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}