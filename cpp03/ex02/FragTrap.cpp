//
// Created by Denis Nadey on 31.05.2021.
//

#include <iostream>
#include "FragTrap.hpp"


std::string FragTrap::_messages[5] = {
        "Away with thee! ",
        "Hocus pocus! ",
        "Ahhh! ",
        "Alaka-ZAM! ",
        "Ha-HA! "
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_max_hit_points = 100;
    this->_max_energy_points = 100;
    this->_level = 1;
    this->_melee_attack_damage = 30;
    this->_ranged_attack_damage = 20;
    this->_armor_damage_reduction = 5;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target){
    if (this->_energy_points >= 25)
    {
        this->_energy_points -= 25;
        std::cout << this->_messages[rand() % 5];
        if (rand() % 2)  meleeAttack(target);
        else rangedAttack(target);
    }
    else std::cout << "🔋⚡️⚡️⚡️ Energy is low: " << this->_energy_points << "/" << 25 << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &trap) {
    this->_name = trap._name;
    this->_hit_points = trap._hit_points;
    this->_energy_points = trap._energy_points;
    this->_max_hit_points = trap._max_hit_points;
    this->_max_energy_points = trap._max_energy_points;
    this->_level = trap._level;
    this->_melee_attack_damage = trap._melee_attack_damage;
    this->_ranged_attack_damage = trap._ranged_attack_damage;
    this->_armor_damage_reduction = trap._armor_damage_reduction;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "Fragtrap constructor destroyed 💀💀💀" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)  : ClapTrap(other._name) {
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_max_hit_points = other._max_hit_points;
    this->_max_energy_points = other._max_energy_points;
    this->_level = other._level;
    this->_melee_attack_damage = other._melee_attack_damage;
    this->_ranged_attack_damage = other._ranged_attack_damage;
    this->_armor_damage_reduction = other._armor_damage_reduction;
}

