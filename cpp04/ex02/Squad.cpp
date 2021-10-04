//
// Created by Matthos Denys on 6/1/21.
//

#include <iostream>
#include "Squad.hpp"


Squad::Squad() {
    this->_units = nullptr;
    this->_count = 0;
}

Squad::Squad(const Squad& tmp) {
    *this = tmp;
}

Squad::~Squad() {
    for (int i = 0; i < this->_count; i++)
        delete this->_units[i];
    delete [] this->_units;
}

Squad&	Squad::operator =(const Squad& tmp) {
    delete [] this->_units;

    this->_units = new ISpaceMarine* [tmp._count];
    for (int i = 0; i < this->_count; i++)
        this->_units[i] = tmp._units[i];
    this->_count = tmp._count;
    return *this;
}

int		Squad::getCount() const {
    return this->_count;
}

bool	Squad::_is_in_squad(ISpaceMarine* marine) {
    for (int i = 0; i < this->_count; i++) {
        if (this->_units[i] == marine)
            return (true);
    }
    return (false);
}

void	Squad::_add_new_marine(ISpaceMarine* marine) {
    ISpaceMarine**		new_units;

    new_units = new ISpaceMarine* [this->_count];
    for (int i = 0; i < this->_count; i++) {
        new_units[i] = this->_units[i];
    }
    new_units[this->_count] = marine;
    this->_count++;
    delete this->_units;
    this->_units = new_units;
}

int		Squad::push(ISpaceMarine* marine) {

    if (marine == nullptr) std::cout << "Can't add NULL marine" << std::endl;
    else if (_is_in_squad(marine)) std::cout << "This marine is already in squad" << std::endl;
    else _add_new_marine(marine);
    return this->_count;
}

ISpaceMarine*	Squad::getUnit(int n) const {
    if (0 <= n && n < this->_count) return this->_units[n];
    return nullptr;
}