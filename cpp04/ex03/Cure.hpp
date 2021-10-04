//
// Created by Matthos Denys on 6/3/21.
//

#ifndef EX03_CURE_HPP
# define EX03_CURE_HPP


# include "AMateria.hpp"

class Cure : public AMateria{
public:
    Cure();
    Cure(const Cure& other);
    Cure(const AMateria* other);
    virtual ~Cure();

    Cure&	operator =(const Cure& other);
    AMateria*	clone() const;
    void		use(ICharacter& target);
};

#endif //EX03_CURE_HPP
