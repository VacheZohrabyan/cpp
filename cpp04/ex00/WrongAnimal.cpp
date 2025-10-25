#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal ctor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "WrongAnimal copy ctor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal assignment operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal dtor" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal" << std::endl;
}
