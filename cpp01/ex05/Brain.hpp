//
// Created by Matthos Denys on 5/26/21.
//

#ifndef EX05_BRAIN_HPP
#define EX05_BRAIN_HPP


#include <sstream>
#include <string>

class Brain {
public:
    Brain();

    std::string identify() const;

private:
    std::string _address;
};


#endif //EX05_BRAIN_HPP
