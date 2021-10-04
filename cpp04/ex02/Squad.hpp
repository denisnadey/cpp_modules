//
// Created by Matthos Denys on 6/1/21.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {

public:
    Squad();
    Squad(const Squad& other);
    ~Squad();

    Squad&			operator =(const Squad& other);
    int				getCount() const;
    ISpaceMarine*	getUnit(int n) const;
    int				push(ISpaceMarine*);

private:
    ISpaceMarine**	_units;
    int				_count;

    bool			_is_in_squad(ISpaceMarine* marine);
    void			_add_new_marine(ISpaceMarine* marine);
};


#endif //EX02_SQUAD_HPP
