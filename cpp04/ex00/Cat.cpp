#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat ctor" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
    this->type = type;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    *this = other;
    std::cout << "Cat copy ctor" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat dtor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "The cat is meowing." << std::endl;
}

std::string Cat::getType() const
{
    return type;
}