//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "PowerFist.hpp"



PowerFist::~PowerFist() {
    std::cout << this->_name << " destroyed !!!" << std::endl;
}


PowerFist::PowerFist(std::string name, int damage, int apcost) : AWeapon(name, apcost, damage){
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage;
}

PowerFist::PowerFist(PowerFist &PowerFist) : AWeapon(PowerFist) {
    operator=(PowerFist);
}

PowerFist &PowerFist::operator=(const PowerFist &PowerFist) {
    this->_name = PowerFist._name;
    this->_apcost = PowerFist._apcost;
    this->_damage = PowerFist._damage;
    this->_sound_attack = PowerFist._sound_attack;
    return *this;
}

PowerFist::PowerFist() : AWeapon("Power Fist",8, 50){
    setSound("* pschhh... SBAM! *");
}