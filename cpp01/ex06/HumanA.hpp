//
// Created by Matthos Denys on 5/27/21.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP


#include <string>
#include "Weapon.hpp"


class HumanA {
private:
    std::string _name;
    const Weapon& _weapon;
public:
    HumanA();
    HumanA(const std::string name, Weapon& weapon);
    void	attack();

};

#endif //EX06_HUMANA_HPP
