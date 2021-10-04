//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) {
    this->_type = type;
    this->_hp = hp;
    std::cout << this->_was_born << std::endl;
}

Enemy::~Enemy() {
    std::cout << this->_upon_death << std::endl;
}

void Enemy::takeDamage(int damage) {
    if (damage >= 0)
    {
        if (this->_hp - damage >= 0)
        {
            this->_hp -= damage;
        }
        else
        {
            this->_hp -= damage;
        }
    }
}

Enemy::Enemy() {
    this->_type = "default enemy";
    this->_hp = 0;
    setUpon_death("default dead text");
    setWasBorn("default was born text");
}

Enemy &Enemy::operator=(const Enemy &other) {
    this->_was_born = other._was_born;
    this->_upon_death = other._upon_death;
    this->_hp = other._hp;
    this->_type = other._type;
    return *this;
}

Enemy::Enemy(const Enemy &other) {
    operator=(other);
}
