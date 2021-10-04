//
// Created by Matthos Denys on 5/26/21.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include <sstream>
#include "Brain.hpp"

class Human {
public:
    Human();
    std::string identify() const;
    const Brain& getBrain() const;

private:
    const Brain _brain;
};


#endif //EX05_HUMAN_HPP
