//
// Created by Matthos Denys on 5/26/21.
//

#include "Human.hpp"


std::string Human::identify() const {
    return this->_brain.identify();
}

const Brain &Human::getBrain() const {
    return this->_brain;
}

Human::Human() {

}
