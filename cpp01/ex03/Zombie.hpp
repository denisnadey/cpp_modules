//
// Created by Matthos Denys on 5/26/21.
//

#ifndef EX03_ZOMBIE_HPP
#define EX03_ZOMBIE_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class Zombie {
private:
    std::string    name;
    std::string    type;
public:
    Zombie();
    virtual ~Zombie();
    void randomChump();
    Zombie(std::string name, std::string type);
    void announce();

};


#endif //EX03_ZOMBIE_HPP
