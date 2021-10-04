//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::~PlasmaRifle() {
    std::cout << this->_name << " destroyed !!!" << std::endl;
}


PlasmaRifle::PlasmaRifle(std::string name, int damage, int apcost) : AWeapon(name, apcost, damage){
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &plasmaRifle) : AWeapon(plasmaRifle) {
    operator=(plasmaRifle);
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle) {
    this->_name = plasmaRifle._name;
    this->_apcost = plasmaRifle._apcost;
    this->_damage = plasmaRifle._damage;
    this->_sound_attack = plasmaRifle._sound_attack;
    return *this;
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle",5, 21){
    setSound("* piouuu piouuu piouuu *");
}
