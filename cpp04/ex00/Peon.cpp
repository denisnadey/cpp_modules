//
// Created by Matthos Denys on 6/1/21.
//


#include <iostream>
#include "Peon.hpp"

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const std::string& name) : Victim(name){
    this->_name = name;
    std::cout << "Zog zog. " << std::endl;
}

Peon::Peon(const Peon &Peon) : Victim(Peon._name){
    operator=(Peon);
}

Peon &Peon::operator=(const Peon &other) {
    this->_name = other._name;
    return *this;
}

void Peon::introduce() {
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream&		operator <<(std::ostream& out, const Peon& other) {
    out << "I'm " << other.getName() << " and I like otters!" << std::endl;
    return out;
}
