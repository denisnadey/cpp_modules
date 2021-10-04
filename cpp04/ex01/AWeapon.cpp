//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "AWeapon.hpp"

void AWeapon::attack() {
    std::cout << this->getAttackSound() << std::endl;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) {
    this->_name = name;
    this->_apcost = apcost;
    this->_damage = damage;
    this->_sound_attack = "bjjj this is default attack";
}

AWeapon::~AWeapon() {
    std::cout << "AWeapon destroyed" << std::endl;
}

std::string AWeapon::getName() const {
    return this->_name;
}

int AWeapon::getAPCost() const {
    return this->_apcost;
}

int AWeapon::getDamage() const {
    return this->_damage;
}

AWeapon::AWeapon(AWeapon &weapon) {
    operator=(weapon);
}

AWeapon &AWeapon::operator=(const AWeapon &aiweapon) {
    this->_name = aiweapon._name;
    this->_apcost = aiweapon._apcost;
    this->_damage = aiweapon._damage;
    return *this;
}

std::string AWeapon::getAttackSound() {
    return this->_sound_attack;
}

void AWeapon::setSound(std::string sound_attack) {
    this->_sound_attack = sound_attack;
}
