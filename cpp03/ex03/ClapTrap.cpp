//
// Created by Denis Nadey on 31.05.2021.
//

#include <iostream>
#include "ClapTrap.hpp"



// - атака дальнего боя
void ClapTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP 🤖 " <<  this->_name;
    std::cout << " attacks " << target << " at range, ";
    std::cout << " By damaging " << this->_ranged_attack_damage << " points of damage! 💣💣💣" << std::endl;
}


// атака ближнего боя
void ClapTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP 🤖 " <<  this->_name;
    std::cout << " attacks " << target << " at melee, ";
    std::cout << "causing " << this->_melee_attack_damage << " points of damage! 💥💥💥" << std::endl;
}


//- получение повреждений
void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "FR4G-TP 🤖 " <<  this->_name;
    if (this->_armor_damage_reduction >= amount) {
        std::cout << " Couldn't pierce through armor";
    }
    else if (amount - this->_armor_damage_reduction > this->_hit_points) {
        std::cout << " got " << this->_hit_points << " damage. 🔥🔥🔥";
        this->_hit_points = 0;
    }
    else {
        std::cout << " got " << amount - this->_armor_damage_reduction << " damage. 🔥🔥🔥";
        this->_hit_points -= amount - this->_armor_damage_reduction;
    }
    std::cout << std::endl << "💚 Health: " << this->_hit_points << std::endl;
}

// быть отремонтированным
void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP 🤖 " <<  this->_name;
    std::cout << " repaired ";
    if (amount + this->_hit_points > this->_max_hit_points) {
        std::cout << this->_max_hit_points - this->_hit_points << " health.";
        this->_hit_points = this->_max_hit_points;
    }
    else
    {
        std::cout << amount << " health.";
        this->_hit_points += amount;
    }
    std::cout << std::endl << "💚 Health: " << this->_hit_points << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Claptrap constructor destroyed 💀💀💀" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap) {
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

ClapTrap::ClapTrap(std::string name) :_hit_points(100) , _max_energy_points(100), _energy_points(100), _max_hit_points(100), _level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5){
    this->_name = name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &trap) {
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