#include <iostream>
#include "ZombieEvent.hpp"

int main() {
    ZombieEvent	zombieEvent;
    Zombie		zombie_on_stack("Molli", "worker");
    Zombie*		zombie;
    srand (time(NULL));
    zombie_on_stack.announce();

    zombieEvent.setZombieType("Shaker");
    zombie = zombieEvent.newZombie("Sage");
    zombie->announce();
    delete zombie;

    zombieEvent.setZombieType("Buildergirl");
    zombie = zombieEvent.newZombie("Sally");
    zombie->announce();
    delete zombie;

    zombie = zombieEvent.randomChump();
    delete zombie;
    return 0;
}
