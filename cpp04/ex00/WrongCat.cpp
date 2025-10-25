#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat ctor" << std::endl;
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)
{
    this->type = type;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assignment operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat dtor" << std::endl;
}

std::string WrongCat::getType() const 
{
    return type;
}

void WrongCat::makeAnimal() const
{
    std::cout << "WrongCat" << std::endl;
}