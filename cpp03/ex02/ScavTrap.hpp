//
// Created by Denis Nadey on 31.05.2021.
//

#ifndef EX02_SCAVTRAP_HPP
#define EX02_SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:
    static std::string	_challenges[5];
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();
    void		challengeNewcomer() const;
    ScavTrap& operator=(const ScavTrap& trap);
};


#endif //EX02_SCAVTRAP_HPP
