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
    bool operator> (const Fixed& fixed) const;
    bool operator> (Fixed& fixed);
    bool operator< (const Fixed& fixed) const;
    bool operator< (Fixed& fixed);
    bool operator>=(const Fixed& fixed);
    bool operator<=(const Fixed& fixed);
    bool operator==(const Fixed& fixed);
    bool operator!=(const Fixed& fixed);

    Fixed operator+(const Fixed& fixed);
    Fixed operator-(const Fixed& fixed);
    Fixed operator*(const Fixed& fixed);
    Fixed operator/(const Fixed& fixed);

    Fixed& operator++();
    Fixed& operator++(int);
    Fixed& operator--();
    Fixed& operator--(int);

public:
    static Fixed& min(Fixed& fixed1, Fixed& fixed2);
    static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
    static Fixed& max(Fixed& fixed1, Fixed& fixed2);
    static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);

public:
    int toInt() const;
    float toFloat() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif