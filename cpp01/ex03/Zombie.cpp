//
// Created by Matthos Denys on 5/26/21.
//

#include "Zombie.hpp"

Zombie::Zombie() {
    this->type = "worker default";
    this->name = "default";
}

Zombie::~Zombie() {
    std::cout << "<" << this->name << " (" << this->type << ")> Died" << std::endl;
}

Zombie::Zombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
}

void Zombie::announce() {
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::randomChump() {
    std::string names[5] = {"Maria", "Katya", "Bob", "Robert", "Alexey"};
    std::string types[5] = {"Builder", "Crafter", "Beer Maker", "Pilot", "Dog Walker"};
    this->name = names[rand() % 5];
    this->type = types[rand() % 5];
}
