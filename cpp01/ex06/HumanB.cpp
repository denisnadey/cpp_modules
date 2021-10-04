//
// Created by Matthos Denys on 5/27/21.
//

#include <iostream>
#include "HumanB.hpp"

void HumanB::attack() {
    std::cout << this->_name << " attacks with his" << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}

HumanB::HumanB(const std::string name) {
    this->_name = name;
}

