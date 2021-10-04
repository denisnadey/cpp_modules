//
// Created by Matthos Denys on 6/3/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP



# include "ICharacter.hpp"
# include <string>
# include <limits>
# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
    protected:
        unsigned int _xp;
        std::string _type;

    public:
        AMateria(const std::string& type);
        virtual ~AMateria();

        const std::string& getType() const;

        unsigned int getXP() const;

        virtual AMateria* clone() const = 0;

        virtual void use(ICharacter& target);
};


#endif //EX03_AMATERIA_HPP
