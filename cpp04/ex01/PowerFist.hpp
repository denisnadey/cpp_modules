//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP


#include "AWeapon.hpp"

class PowerFist : public AWeapon{
public:
    PowerFist();
    PowerFist(std::string name, int damage, int apcost);
    ~PowerFist();
    PowerFist(PowerFist& PowerFist);
    PowerFist& operator=(const PowerFist& PowerFist);

};

#endif //EX01_POWERFIST_HPP
