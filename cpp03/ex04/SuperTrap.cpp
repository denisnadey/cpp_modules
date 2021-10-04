//
// Created by Denis Nadey on 31.05.2021.
//

#include <iostream>
#include "SuperTrap.hpp"




SuperTrap::~SuperTrap() {
    std::cout << "Ninjatrap constructor destroyed 💀💀💀" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &trap) : ClapTrap(trap._name), FragTrap(trap._name), NinjaTrap(trap._name) {
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

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name){
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    this->_max_hit_points = FragTrap::_max_hit_points;
    this->_energy_points = NinjaTrap::_energy_points;
    this->_max_energy_points = NinjaTrap::_max_energy_points;
    this->_level = 1;
    this->_melee_attack_damage = NinjaTrap::_melee_attack_damage;
    this->_ranged_attack_damage = FragTrap::_ranged_attack_damage;
    this->_armor_damage_reduction = FragTrap::_armor_damage_reduction;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &trap) {
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

void SuperTrap::rangedAttack(std::string const &target) const {
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) const {
    NinjaTrap::meleeAttack(target);
}