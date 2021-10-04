//
// Created by Matthos Denys on 6/3/21.
//

#ifndef EX03_CHARACTER_HPP
# define EX03_CHARACTER_HPP


# include <string>
# include "AMateria.hpp"


class Character : public ICharacter
{
public:
    Character(std::string name);
    Character(const Character& other);
    virtual ~Character();

    Character&	operator =(const Character& other);
    const std::string& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    std::string			_name;
    int					_slots_count;
    static const int	_max_slots = 4;

    AMateria*	_materia_slots[_max_slots];
};


#endif //EX03_CHARACTER_HPP
