//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "Character.hpp"

Character::Character(const std::string &name) {
    this->_name = name;
    this->_weapon = NULL;
    this->_action_points = 40;
}

Character::~Character() {

}

void Character::recoverAP() {
    if (_action_points + 10 >= _max_action_points)
        _action_points = _max_action_points;
    else
        _action_points += 10;
}

void Character::equip(AWeapon *weapon) {
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
    if (this->_weapon) {
        if (this->_weapon->getAPCost() <= this->_action_points) {
            std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->_name << std::endl;
            this->_weapon->attack();
            this->_action_points -= this->_weapon->getAPCost();
            enemy->takeDamage(this->_weapon->getDamage());
        }
        else std::cout << "Not enough action points" << std::endl;
    }
    else std::cout << "Can't attack without a weapon" << std::endl;
}

std::string Character::getName() const {
    return this->_name;
}
int				Character::getAP() const {
    return this->_action_points;
}

AWeapon*		Character::getWeapon() const {
    return this->_weapon;
}

Character& Character::operator=(const Character &character) {
    this->_name = character._name;
    this->_weapon = character._weapon;
    this->_action_points = character._action_points;
    this->_max_action_points = character._max_action_points;
    return *this;
}

Character::Character(const Character &character) {
    operator=(character);
}


std::ostream&	operator <<(std::ostream& out, const Character& character) {
    std::cout << character.getName() << " has ";
    std::cout << character.getAP() << " AP and " ;
    if (character.getWeapon()) {
        std::cout << "wields a " << character.getWeapon()->_name << std::endl;
    } else {
        std::cout << "is unarmed";
    }
    return out;
}

