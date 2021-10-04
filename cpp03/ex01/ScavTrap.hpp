//
// Created by Matthos Denys on 5/30/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP


#include <string>
#include <iostream>

class ScavTrap {
private:
    int _hit_points ;
    int _max_hit_points ;
    int _energy_points ;
    int _max_energy_points ;
    int _level ;
    std::string _name ;
    int _melee_attack_damage ;
    int _ranged_attack_damage ;
    int _armor_damage_reduction ;
    static std::string	_challenges[5];
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& trav);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap& trav);
    void rangedAttack(const std::string &target);
    void meleeAttack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer();
};


#endif //EX01_SCAVTRAP_HPP
