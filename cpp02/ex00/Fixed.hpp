//
// Created by Matthos Denys on 28/05/2021.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

# include <iostream>

class Fixed {
private:
    int _point_float;
    static const int _bit = 8;
public:
    Fixed();
    Fixed(const Fixed& copy);
    ~Fixed();
    Fixed& operator=(const Fixed& src);
    int		getRawBits() const;
    void	setRawBits(int const raw);

};


#endif //EX00_FIXED_HPP