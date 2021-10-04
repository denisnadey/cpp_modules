//
// Created by Denis Nadey on 25.05.2021.
//

#include "Pony.hpp"

Pony ponyOnTheStack(std::string name, int horn_length)  {
    Pony pony = Pony(name, horn_length);
    return pony;
}

Pony *ponyOnTheHeap(std::string name, int horn_length)  {
    Pony	*pony = new Pony(name, horn_length);
    return pony;
}

Pony::Pony(std::string name, int horn_length) {
    this->name = name;
    this->horn_length = horn_length;
    this->like_number = rand();
    std::cout << "Pony " << this->name << " was born" << std::endl;
}

Pony::~Pony() {
    std::cout << "Pony " << this->name << " rode off into the woods" << std::endl;
}
