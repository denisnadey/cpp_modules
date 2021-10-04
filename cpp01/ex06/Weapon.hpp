//
// Created by Matthos Denys on 5/27/21.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP


#include <string>

class Weapon {
private:
    std::string _type;
public:
    Weapon(std::string str);

    const std::string&	getType() const;
    void setType(std::string type);

};


#endif //EX06_WEAPON_HPP
