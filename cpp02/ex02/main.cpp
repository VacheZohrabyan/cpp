#include "Fixed.hpp"

int main()
{
    Fixed a(10);           // int constructor
    Fixed b(42.42f);       // float constructor
    Fixed c = a;           // copy constructor

    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    // Comparison operators
    std::cout << std::boolalpha; // print true/false instead of 1/0
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= c: " << (a <= c) << std::endl;
    std::cout << "a >= c: " << (a >= c) << std::endl;
    std::cout << "a == c: " << (a == c) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;

    // Arithmetic operators
    Fixed d = a + b;
    Fixed e = b - a;
    Fixed f = a * b;
    Fixed g = b / a;

    std::cout << "a + b = " << d << std::endl;
    std::cout << "b - a = " << e << std::endl;
    std::cout << "a * b = " << f << std::endl;
    std::cout << "b / a = " << g << std::endl;

    // Increment / Decrement
    Fixed h;
    std::cout << "h = " << h << std::endl;
    std::cout << "++h = " << ++h << std::endl; // pre-increment
    std::cout << "h++ = " << h++ << std::endl; // post-increment
    std::cout << "h = " << h << std::endl;

    std::cout << "--h = " << --h << std::endl; // pre-decrement
    std::cout << "h-- = " << h-- << std::endl; // post-decrement
    std::cout << "h = " << h << std::endl;

    // min / max
    Fixed& minRef = Fixed::min(a, b);
    const Fixed& minConstRef = Fixed::min(static_cast<const Fixed&>(a), static_cast<const Fixed&>(b));
    Fixed& maxRef = Fixed::max(a, b);
    const Fixed& maxConstRef = Fixed::max(static_cast<const Fixed&>(a), static_cast<const Fixed&>(b));

    std::cout << "min(a, b) = " << minRef << std::endl;
    std::cout << "min(const a, const b) = " << minConstRef << std::endl;
    std::cout << "max(a, b) = " << maxRef << std::endl;
    std::cout << "max(const a, const b) = " << maxConstRef << std::endl;

    return 0;
}
