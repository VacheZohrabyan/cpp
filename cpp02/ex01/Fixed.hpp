#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static int const fractionalBits = 8;

public:
    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

public:
    float toFloat() const ;
    int toInt() const ;
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);

#endif