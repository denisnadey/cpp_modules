//
// Created by Denis Nadey on 31.05.2021.
//

#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::~NinjaTrap() {

}

NinjaTrap::NinjaTrap(const NinjaTrap &trap) : ClapTrap(trap._name) {
    this->_hit_points = trap._hit_points;
    this->_max_hit_points = trap._max_hit_points;
    this->_energy_points = trap._energy_points;
    this->_max_energy_points = trap._max_energy_points;
    this->_level = trap._level;
    this->_name = trap._name;
    this->_melee_attack_damage = trap._melee_attack_damage;
    this->_ranged_attack_damage = trap._ranged_attack_damage;
    this->_armor_damage_reduction = trap._armor_damage_reduction;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
    this->_name = name;
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_level = 1;
    this->_melee_attack_damage = 60;
    this->_ranged_attack_damage = 5;
    this->_armor_damage_reduction = 0;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &trap) {
    this->_hit_points = trap._hit_points;
    this->_max_hit_points = trap._max_hit_points;
    this->_energy_points = trap._energy_points;
    this->_max_energy_points = trap._max_energy_points;
    this->_level = trap._level;
    this->_name = trap._name;
    this->_melee_attack_damage = trap._melee_attack_damage;
    this->_ranged_attack_damage = trap._ranged_attack_damage;
    this->_armor_damage_reduction = trap._armor_damage_reduction;
    return *this;
}

void		NinjaTrap::ninjaShoebox(ClapTrap& other) {
    std::cout << this->getName()  << " attacking " << other.getName() << " with shoebox! Missing libizyaka!" << std::endl;
    other.takeDamage(this->_melee_attack_damage);
}

void		NinjaTrap::ninjaShoebox(FragTrap& other) {
    std::cout << this->getName()  << " attacking " << other.getName() << " with shoebox! Throws it far away!" << std::endl;
    other.takeDamage(this->_melee_attack_damage);
}

void		NinjaTrap::ninjaShoebox(ScavTrap& other) {
    std::cout << this->getName()  << " attacking " << other.getName() << " with shoebox! Scavenger found and killed" << std::endl;
    other.takeDamage(this->_melee_attack_damage);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap& other) {
    std::cout << this->getName()  << " attacking "  << other.getName() << " with shoebox! Not so sneaky as we thought!" << std::endl;
    other.takeDamage(this->_melee_attack_damage);
}