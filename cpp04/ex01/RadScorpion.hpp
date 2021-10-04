//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX01_RadScorpion_HPP
#define EX01_RadScorpion_HPP


#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
    RadScorpion();
    RadScorpion(const RadScorpion& other);
    virtual ~RadScorpion();

    RadScorpion&	operator =(const RadScorpion& other);
};


#endif //EX01_RadScorpion_HPP
