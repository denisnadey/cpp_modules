//
// Created by Denis Nadey on 31.05.2021.
//

#ifndef EX02_NINJATRAP_HPP
#define EX02_NINJATRAP_HPP


#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap{
private:
    static std::string	_messages[5];
public:
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap& other);
    ~NinjaTrap();
    NinjaTrap& operator=(const NinjaTrap& trap);
    std::string getName()
    {
       return this->_name;
    }

    void		ninjaShoebox(ClapTrap& other);
    void		ninjaShoebox(FragTrap& other);
    void		ninjaShoebox(ScavTrap& other);
    void		ninjaShoebox(NinjaTrap& other);
};


#endif //EX02_NINJATRAP_HPP
