//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP


#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
    std::string		_name;
    AWeapon*		_weapon;
    int				_action_points;
    int				_max_action_points;
public:
    Character(std::string const & name);
    ~Character();
    Character(const Character& character);
    Character& operator=(const Character& character);

    void recoverAP();
    void equip(AWeapon* weapon);
    void attack(Enemy* enemy);
    std::string  getName() const;
    int getAP() const;
    AWeapon* getWeapon() const;
};

std::ostream&	operator <<(std::ostream& out, const Character& character);

#endif //EX01_CHARACTER_HPP
