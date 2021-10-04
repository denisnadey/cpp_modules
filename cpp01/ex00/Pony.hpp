//
// Created by Denis Nadey on 25.05.2021.
//

#ifndef EX00_PONY_HPP
#define EX00_PONY_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Pony {
public:
    Pony(std::string name, int horn_length);
    virtual ~Pony();

    //field
    std::string name;
    int horn_length;
private:
    int like_number;

};

Pony *ponyOnTheHeap(std::string name, int horn_length);
Pony ponyOnTheStack(std::string name, int horn_length);

#endif //EX00_PONY_HPP
