//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& other) {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = other;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine&	TacticalMarine::operator =(const TacticalMarine& other) {
    this->_name = other._name;
    return *this;
}

ISpaceMarine*	TacticalMarine::clone() const {
    TacticalMarine	*copy = new TacticalMarine;
    *copy = *this;
    return copy;
}

void			TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}