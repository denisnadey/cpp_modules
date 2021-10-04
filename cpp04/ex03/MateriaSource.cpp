//
// Created by Matthos Denys on 6/3/21.
//

#include <iostream>
#include "MateriaSource.hpp"

AMateria *MateriaSource::createMateria(const std::string &type) {
    for(int i = 0; i < _count; i++)
    {
        if (this->_all_slots[i]->getType() == type) {
            return this->_all_slots[i]->clone();
        }
    }
    return NULL;
}

MateriaSource::MateriaSource() {
    this->_count = 0;
    for(int i = 0; i < _slots; i ++)
    {
        this->_all_slots[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    *this = other;
}

MateriaSource::~MateriaSource() {
    for(int i = 0; i < _slots; i++) {
        delete this->_all_slots[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    for(int i = 0; i < _slots; i++) {
        delete this->_all_slots[i];
    }
    this->_count = other._count;
    for (int i = 0; i < _slots; i++) {
        this->_all_slots[i] = other._all_slots[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    if (m) {
        if (_count == _slots) {
            std::cout << "Materia slots are full" << std::endl;
        } else {
            _all_slots[_count] = m;
            _count++;
        }
    } else {
        std::cout << "Can't learn NULL" << std::endl;
    }
}
