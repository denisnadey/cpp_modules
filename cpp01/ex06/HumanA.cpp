//
// Created by Matthos Denys on 5/27/21.
//

#include <iostream>
#include "HumanA.hpp"


HumanA::HumanA(const std::string name, Weapon& weapon) : _weapon(weapon) {
    this->_name = name;
}


void HumanA::attack() {
    std::cout << this->_name << " attacks with his" << this->_weapon.getType() << std::endl;
}


