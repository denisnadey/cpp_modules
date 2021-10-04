//
// Created by Matthos Denys on 5/29/21.
//

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

# include <iostream>
# include <ostream>
# include <cmath>

class Fixed {
private:
    int _value;
    static const int    _bit = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(const Fixed& fixed);
    Fixed& operator=(const Fixed& fixed);
    int		getRawBits() const;
    void	setRawBits(int const raw);
    float	toFloat() const;
    int		toInt() const;
};


std::ostream& operator <<(std::ostream& out, const Fixed& src);

#endif //EX01_FIXED_HPP
