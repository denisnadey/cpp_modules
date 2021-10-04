//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP


#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:
    TacticalMarine();
    TacticalMarine(const TacticalMarine& other);
    ~TacticalMarine();

    TacticalMarine&	operator =(const TacticalMarine& other);

    ISpaceMarine*	clone() const;
    void			battleCry() const;
    void			rangedAttack() const;
    void			meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_HPP
