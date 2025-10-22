#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(int const value)
{
    this->value = value << fractionalBits;
}

Fixed::Fixed(float const value)
{
    this->value = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& fixed)
{
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (*this == other)
        return *this;
    this->value = other.value;
    return *this;
}

Fixed::~Fixed()
{

}

bool Fixed::operator> (const Fixed& fixed) const
{
    return (this->value > fixed.value);
}

bool Fixed::operator> (Fixed& fixed)
{
    return (this->value > fixed.value);
}

bool Fixed::operator< (Fixed& fixed)
{
    return (this->value < fixed.value);
}

bool Fixed::operator< (const Fixed& fixed) const
{
    return (this->value < fixed.value);
}

bool Fixed::operator>=(const Fixed& fixed)
{
    return (this->value >= fixed.value);
}

bool Fixed::operator<=(const Fixed& fixed)
{
    return (this->value <= fixed.value);
}

bool Fixed::operator==(const Fixed& fixed)
{
    return (this->value == fixed.value);
}

bool Fixed::operator!=(const Fixed& fixed)
{
    return !(this->value == fixed.value);
}

Fixed Fixed::operator+ (const Fixed& fixed)
{
    Fixed tmp;
    tmp.value = this->value + fixed.value;
    return tmp;
}

Fixed Fixed::operator- (const Fixed& fixed)
{
    Fixed tmp;
    tmp.value = this->value - fixed.value;
    return tmp;
}

Fixed Fixed::operator* (const Fixed& fixed)
{
    Fixed tmp;
    this->value = this->value >> fractionalBits;
    tmp.value = this->value * fixed.value;
    this->value = this->value << fractionalBits;
    return tmp;
}

Fixed Fixed::operator/ (const Fixed& fixed)
{
    Fixed tmp;
    tmp.value = this->value / fixed.value;
    return tmp;
}

Fixed& Fixed::operator++()
{
    this->value++;
    return *this;
}

Fixed& Fixed::operator++(int)
{
    Fixed *tmp = this;
    this->value++;
    return *tmp;
}

Fixed& Fixed::operator--()
{
    this->value--;
    return *this;
}

Fixed& Fixed::operator--(int)
{
    Fixed* tmp = this;
    this->value--;
    return *tmp;
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
    return (fixed1 > fixed2) ? fixed2 : fixed1;
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
    return ((fixed1 > fixed2) ? fixed2 : fixed1);
}

Fixed& Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
    return (fixed1 < fixed2) ? fixed2 : fixed1;
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
    return ((fixed1 < fixed2) ? fixed2 : fixed1);
}

float Fixed::toFloat() const
{
    return static_cast<float>(this->value) / (1 << fractionalBits);
}

int Fixed::toInt() const
{
    return this->value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}