#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog ctor" << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
    this->type = type;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy ctor" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog dtor" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::makeSound() const
{
    std::cout << "The dog is barking." << std::endl;
}