//
// Created by Matthos Denys on 6/3/21.
//

#ifndef EX03_ICE_HPP
# define EX03_ICE_HPP


# include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice();
    Ice(const Ice& other);
    Ice(const AMateria* other);
    virtual ~Ice();

    Ice&	operator =(const Ice& other);
    AMateria*	clone() const;
    void		use(ICharacter& target);
};


#endif //EX03_ICE_HPP
