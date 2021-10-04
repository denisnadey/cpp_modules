//
// Created by Denis Nadey on 25.05.2021.
//

#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP


#include <string>

class Zombie {
private:
    std::string    name;
    std::string    type;
public:
    Zombie();
    virtual ~Zombie();
    Zombie(std::string name, std::string type);
    void announce();

};


#endif //EX02_ZOMBIE_HPP
