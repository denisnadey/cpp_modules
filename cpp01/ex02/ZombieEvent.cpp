//
// Created by Denis Nadey on 25.05.2021.
//

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

ZombieEvent::ZombieEvent() {

}

Zombie *ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, this->type);
}

Zombie *ZombieEvent::randomChump() {
    std::string	names[5] = {"Maria", "Katya", "Bob", "Robert", "Alexey"};
    std::string	types[5] = {"Builder", "Crafter", "BeerMaker", "Pilot", "Dog walker"};
    Zombie*	zombie = new Zombie(names[rand() % 5], types[rand() % 5]);
    zombie->announce();
    return zombie;
}

