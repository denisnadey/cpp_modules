//
// Created by Matthos Denys on 6/3/21.
//

#ifndef EX03_MATERIASOURCE_HPP
# define EX03_MATERIASOURCE_HPP


# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    virtual ~MateriaSource();
    MateriaSource&	operator =(const MateriaSource& other);
    void			learnMateria(AMateria* m);
    AMateria*		createMateria(const std::string& type);

private:
    static const int	_slots = 4;
    int					_count;
    AMateria*			_all_slots[_slots];
};

#endif //EX03_MATERIASOURCE_HPP
