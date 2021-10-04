//
// Created by Matthos Denys on 6/3/21.
//

#ifndef EX03_IMATERIASOURCE_HPP
#define EX03_IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include <string>

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(const std::string& type) = 0;
};


#endif //EX03_IMATERIASOURCE_HPP