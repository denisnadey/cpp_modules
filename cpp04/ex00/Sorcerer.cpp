//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const std::string& name, const std::string& title) {
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer) {
    operator=(sorcerer);
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other) {
    this->_title = other._title;
    this->_name = other._name;
    return *this;
}

void Sorcerer::introduce() {
    std::cout << " I am " << this->_name << ", " << this->_title << ", and I like ponies 🐴!" << std::endl;
}

void Sorcerer::polymorph(const Victim &victim) const {
    victim.getPolymorphed();
}

void Sorcerer::polymorph(const Peon &peon) const {
    peon.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &other) {
    out << " I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies 🐴!" << std::endl;
    return out;
}
