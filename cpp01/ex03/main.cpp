#include <iostream>

#include "ZombieHorde.hpp"


int main() {
    srand(time(NULL));
    ZombieHorde *zombieHorde = new ZombieHorde(10);

    zombieHorde->announce();

    delete (zombieHorde);
    return 0;
}
