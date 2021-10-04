//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP


#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
    SuperMutant();
    SuperMutant(const SuperMutant& other);
    virtual ~SuperMutant();

    SuperMutant&	operator =(const SuperMutant& other);
    void			takeDamage(int damage);
};


#endif //EX01_SUPERMUTANT_HPP
