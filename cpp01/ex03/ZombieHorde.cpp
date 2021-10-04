//
// Created by Matthos Denys on 5/26/21.
//

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
    this->_n = n;
    if (n > 0) {
        this->_zombies = new Zombie[n];
        std::cout << "ZombieHorde created" << std::endl;
        for (int i = 0; i < n; i++) {
            this->_zombies[i].randomChump();
        }
    } else {
        std::cout << "0 ZombieHorde" << std::endl;
    }
}

void ZombieHorde::announce() {
    for (int i = 0; i < this->_n; i++) {
        this->_zombies[i].announce();
    }
}

ZombieHorde::~ZombieHorde() {
    if (this->_n > 0) {
        std::cout << "Destroying Zombies" << std::endl;
        delete[] this->_zombies;
    }
    std::cout << "Destroying ZombieHorde" << std::endl;
}

