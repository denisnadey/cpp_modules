//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP


#include <string>

class AWeapon {
protected:
    int         _apcost;
    int         _damage;
    std::string _sound_attack;
public:
    std::string _name;
    AWeapon(std::string const &name, int apcost, int damage);
    ~AWeapon();
    AWeapon(AWeapon& weapon);
    AWeapon& operator=(const AWeapon& aiweapon);
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    std::string getAttackSound();
    void attack();
    void setSound(std::string sound_attack);
};


#endif //EX01_AWEAPON_HPP
