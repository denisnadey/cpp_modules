//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::~RadScorpion() {
    std::cout << this->_upon_death << std::endl;
}

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
    setUpon_death("* SPROTCH *");
    setWasBorn("* click click click *");
    std::cout << this->_was_born << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) {
    operator=(other);
}

RadScorpion &RadScorpion::operator=(const RadScorpion &other) {
    this->_was_born = other._was_born;
    this->_upon_death = other._upon_death;
    this->_hp = other._hp;
    this->_type = other._type;
    return *this;
}
