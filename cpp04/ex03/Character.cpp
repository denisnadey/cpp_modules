//
// Created by Matthos Denys on 6/3/21.
//

#include <iostream>
#include "Character.hpp"

Character::Character(std::string name)  : ICharacter() {
    this->_slots_count = 0;
    this->_name = name;
    for(int i = 0; i < _max_slots; i++)
        this->_materia_slots[i] = NULL;
}

Character::Character(const Character &other) : ICharacter() {
    *this = other;
}

Character::~Character() {
    for(int i = 0; i < _max_slots; i++)
    {
        delete this->_materia_slots[i];
    }
}

Character &Character::operator=(const Character& other) {
    for(int i = 0; i < _max_slots; i++)
    {
        delete this->_materia_slots[i];
    }

    this->_name = other._name;
    this->_slots_count = other._slots_count;
    for(int i = 0; i < this->_slots_count; i++)
        this->_materia_slots[i] = other._materia_slots[i]->clone();
    return *this;
}

const std::string& Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {

    if (m) {

        if (_slots_count == _max_slots) {
            std::cout << "Materia slots are full" << std::endl;
        } else {
            _materia_slots[_slots_count] = m;
            _slots_count++;
        }
    } else {
        std::cout << "Can't equip NULL" << std::endl;
    }
}

void Character::unequip(int idx) {



    if (0 <= idx && idx < _slots_count) {
        for (int i = idx; i < _max_slots - 1; i++) {
            _materia_slots[i] = _materia_slots[i + 1];
        }
        _materia_slots[_max_slots - 1] = NULL;
        _slots_count--;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (0 <= idx && idx < _slots_count) {
        _materia_slots[idx]->use(target);
    }
}
