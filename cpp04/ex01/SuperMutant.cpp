//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::~SuperMutant() {
    std::cout << this->_upon_death << std::endl;
}

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
    setUpon_death("Aaargh...");
    setWasBorn("Gaaah. Me want smash heads!");
    std::cout << this->_was_born << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) {
    operator=(other);
}

SuperMutant &SuperMutant::operator=(const SuperMutant &other) {
    this->_was_born = other._was_born;
    this->_upon_death = other._upon_death;
    this->_hp = other._hp;
    this->_type = other._type;
    return *this;
}

void SuperMutant::takeDamage(int damage) {
    if (damage >= 0)
    {
        if (damage - 3 >= 0)
        {
            damage -= 3;
        }
        if (this->_hp - damage >= 0)
        {
            this->_hp -= damage;
        }
        else
        {
            this->_hp -= damage;
        }
    }
}
