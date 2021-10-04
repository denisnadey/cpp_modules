//
// Created by Matthos Denys on 5/30/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP


#include <string>
#include <iostream>

class FragTrap {
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
    static std::string	_messages[5];
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap& trap);
    virtual ~FragTrap();
    FragTrap& operator=(const FragTrap& fixed);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX00_FRAGTRAP_HPP
