//
// Created by Matthos Denys on 5/30/21.
//

#include "ScavTrap.hpp"

std::string ScavTrap::_challenges[5] = {
    "Let's see that're you made of! ",
    "Get ready! ",
    "Aaaaaargh! ",
    "You wanna fight?! ",
    "Wait a sec. let me try something ."
};

// - атака дальнего боя
void ScavTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP 🤖 " <<  this->_name;
    std::cout << " attacks " << target << " at range, ";
    std::cout << " By damaging " << this->_ranged_attack_damage << " points of damage! 💣💣💣" << std::endl;
}


// атака ближнего боя
void ScavTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP 🤖 " <<  this->_name;
    std::cout << " attacks " << target << " at melee, ";
    std::cout << "causing " << this->_melee_attack_damage << " points of damage! 💥💥💥" << std::endl;
}


ScavTrap::ScavTrap(std::string name) :_hit_points(100) , _max_energy_points(100), _energy_points(50), _max_hit_points(100), _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3){
    this->_name = name;
}

ScavTrap::ScavTrap(const ScavTrap &trav) {
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
    std::cout << "Default constructor destroyed 💀💀💀" << std::endl;
}

//- получение повреждений
void ScavTrap::takeDamage(unsigned int amount) {
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
void ScavTrap::beRepaired(unsigned int amount) {
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

void ScavTrap::challengeNewcomer() {
    std::cout << ScavTrap::_challenges[rand() % 5] << std::endl;
}
