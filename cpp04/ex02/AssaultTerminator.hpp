//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP


#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:
    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator& terminator);
    ~AssaultTerminator();

    AssaultTerminator&	operator =(const AssaultTerminator& terminator);

    ISpaceMarine*	clone() const;
    void			battleCry() const;
    void			rangedAttack() const;
    void			meleeAttack() const;
};


#endif //EX02_ASSAULTTERMINATOR_HPP
