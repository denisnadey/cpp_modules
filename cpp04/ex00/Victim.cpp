//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "Victim.hpp"

Victim::~Victim() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const std::string& name) {
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &Victim) {
    operator=(Victim);
}

Victim &Victim::operator=(const Victim &other) {
    this->_name = other._name;
    return *this;
}

void Victim::introduce() {
    std::cout << "I am " << this->_name << " and I like otters!" << std::endl;
}

void Victim::getPolymorphed() const {
    std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&		operator <<(std::ostream& out, const Victim& other) {
    out << "I'm " << other.getName() << " and I like otters!" << std::endl;
    return out;
}
