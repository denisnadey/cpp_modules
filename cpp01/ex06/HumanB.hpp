//
// Created by Matthos Denys on 5/27/21.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP


#include <string>
#include "Weapon.hpp"


class HumanB {
private:
    Weapon* _weapon;
    std::string _name;
public:
    HumanB();
    HumanB(const std::string name);
    void	attack();
    void    setWeapon(Weapon& weapon);

};


#endif //EX06_HUMANB_HPP
