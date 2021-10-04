//
// Created by Denis Nadey on 31.05.2021.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP


#include <string>

class ClapTrap {
protected:
    int _hit_points ;
    int _max_hit_points ;
    int _energy_points ;
    int _max_energy_points ;
    int _level ;
    std::string _name ;
    int _melee_attack_damage ;
    int _ranged_attack_damage ;
    int _armor_damage_reduction ;
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& clap);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& clap);
    void rangedAttack(const std::string &target) const;
    void meleeAttack(const std::string &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName()
    {
        return this->_name;
    }
};


#endif //EX02_CLAPTRAP_HPP
