//
// Created by Denis Nadey on 25.05.2021.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP


#include "Zombie.hpp"

class ZombieEvent {
public:
    ZombieEvent();
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump();

private:
    std::string type;
};


#endif //EX02_ZOMBIEEVENT_HPP
