//
// Created by Matthos Denys on 5/26/21.
//


#include <iostream>
#include "Brain.hpp"

Brain::Brain() {

}

std::string Brain::identify() const {
    std::stringstream stringforstring;
    stringforstring << "0x" << std::uppercase << std::hex << (long)this;
    return stringforstring.str();
}

