//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP


#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {
private:
    std::string  _name;
    std::string  _title;
public:
    Sorcerer(const std::string& name, const std::string& title);
    ~Sorcerer();
    Sorcerer(const Sorcerer& sorcerer);
    Sorcerer&		operator =(const Sorcerer& other);
    void    introduce();
    std::string   getName() const
    {
        return this->_name;
    }
    std::string   getTitle() const
    {
        return this->_title;
    }
    void			polymorph(const Victim& victim) const;
    void			polymorph(const Peon& peon) const;
};

std::ostream&		operator<<(std::ostream& out, const Sorcerer& other);

#endif //EX00_SORCERER_HPP
