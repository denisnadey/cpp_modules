//
// Created by Matthos Denys on 6/3/21.
//


#ifndef EX03_ICHARACTER_HPP
# define EX03_ICHARACTER_HPP

# include <string>
# include "AMateria.hpp"


class AMateria;

class ICharacter{
    public:
        virtual ~ICharacter() {}
        virtual const std::string& getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};


#endif //EX03_ICHARACTER_HPP
