//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& termintaor) {
    std::cout << "* teleports from space *" << std::endl;
    *this = termintaor;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator&	AssaultTerminator::operator =(const AssaultTerminator& termintaor) {
    this->_name = termintaor._name;
    return *this;
}

ISpaceMarine*	AssaultTerminator::clone() const {
    AssaultTerminator	*copy = new AssaultTerminator;
    *copy = *this;
    return copy;
}

void			AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}
