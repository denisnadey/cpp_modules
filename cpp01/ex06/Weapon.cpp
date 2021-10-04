//
// Created by Matthos Denys on 5/27/21.
//

#include "Weapon.hpp"


Weapon::Weapon(std::string str) {
    this->_type = str;
}


void Weapon::setType(std::string type) {
    this->_type = type;
}

const std::string& Weapon::getType() const {
    const std::string &reference = this->_type;
    return reference;
}

