//
// Created by Denis Nadey on 25.05.2021.
//

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
    this->type = "worker default";
    this->name = "bob";
}

Zombie::Zombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
}

void Zombie::announce() {
    std::cout << "<" << this->name << " (" << this->type <<")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
//    std::cout << "<" << this->name << " (" << this->type << ")> Died" << std::endl;
}
