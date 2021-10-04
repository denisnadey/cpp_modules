//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
public:
    PlasmaRifle();
    PlasmaRifle(std::string name, int damage, int apcost);
    ~PlasmaRifle();
    PlasmaRifle(PlasmaRifle& plasmaRifle);
    PlasmaRifle& operator=(const PlasmaRifle& plasmaRifle);

};


#endif //EX01_PLASMARIFLE_HPP
