#include "Animal.hpp"

Animal::Animal()
{
    type = "";
    std::cout << "Animal ctor" << std::endl;
}

Animal::Animal(const std::string& type)
{
    this->type = type;
}

Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "Animal copy ctor" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignment ctor" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal dtor" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
