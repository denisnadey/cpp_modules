//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP


#include <string>
#include "Victim.hpp"

class Peon : public Victim{
public:
    Peon(const std::string& name);
    ~Peon();
    Peon(const Peon& Peon);
    Peon&		operator =(const Peon& other);
    void    introduce();
    std::string   getName() const
    {
        return this->_name;
    }
    void getPolymorphed() const;
};

std::ostream&		operator <<(std::ostream& out, const Peon& other);

#endif //EX00_PEON_HPP
