//
// Created by Matthos Denys on 6/3/21.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) {
    this->_type = type;
    this->_xp = 0;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
    return this->_type;
}

unsigned int AMateria::getXP() const {
    return this->_xp;
}

void AMateria::use(ICharacter &target) {
    if (this->_xp + 10 > UINT32_MAX)
        this->_xp = UINT32_MAX;
    else
        this->_xp += 10;
    target.getName();
}
