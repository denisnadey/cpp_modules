//
// Created by Denis Nadey on 31.05.2021.
//

#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP


#include "ClapTrap.hpp"

class FragTrap :  virtual public ClapTrap {
private:
    static std::string	_messages[5];
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    ~FragTrap();
    FragTrap& operator=(const FragTrap& trap);
    void vaulthunter_dot_exe(std::string const & target);
};


#endif //EX02_FRAGTRAP_HPP
