//
// Created by Denis Nadey on 31.05.2021.
//

#include <iostream>
#include "ScavTrap.hpp"

std::string ScavTrap::_challenges[5] = {
        "Let's see that're you made of! ",
        "Get ready! ",
        "Wooo ha ha ha ! ",
        "You wanna fight?! ",
        "Wait a sec. let me try something ."
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_name = name;
    this->_hit_points = 100;
    this->_max_hit_points = 100;
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_level = 1;
    this->_melee_attack_damage = 20;
    this->_ranged_attack_damage = 15;
    this->_armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap &trav) : ClapTrap(trav._name) {
    this->_hit_points = trav._hit_points;
    this->_max_hit_points = trav._max_hit_points;
    this->_energy_points = trav._energy_points;
    this->_max_energy_points = trav._max_energy_points;
    this->_level = trav._level;
    this->_name = trav._name;
    this->_melee_attack_damage = trav._melee_attack_damage;
    this->_ranged_attack_damage = trav._ranged_attack_damage;
    this->_armor_damage_reduction = trav._armor_damage_reduction;
}

ScavTrap::~ScavTrap() {
    std::cout << "Scavtrap constructor destroyed 💀💀💀" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &trav) {
    this->_hit_points = trav._hit_points;
    this->_max_hit_points = trav._max_hit_points;
    this->_energy_points = trav._energy_points;
    this->_max_energy_points = trav._max_energy_points;
    this->_level = trav._level;
    this->_name = trav._name;
    this->_melee_attack_damage = trav._melee_attack_damage;
    this->_ranged_attack_damage = trav._ranged_attack_damage;
    this->_armor_damage_reduction = trav._armor_damage_reduction;
    return *this;
}

void ScavTrap::challengeNewcomer() const {
    std::cout << ScavTrap::_challenges[rand() % 5] << std::endl;
}
