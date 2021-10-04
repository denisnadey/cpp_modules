//
// Created by Denis Nadey on 31.05.2021.
//

#ifndef EX02_SUPERTRAP_HPP
#define EX02_SUPERTRAP_HPP




#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap  {
public:
    SuperTrap(std::string name);
    SuperTrap(const SuperTrap& other);
    ~SuperTrap();
    SuperTrap& operator=(const SuperTrap& trap);
    void		rangedAttack(const std::string& target) const;
    void		meleeAttack(const std::string& target) const;
};


#endif //EX02_SUPERTRAP_HPP
