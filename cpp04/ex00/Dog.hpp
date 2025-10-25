#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const std::string& type);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

public:
    std::string getType() const;
    void makeSound() const;
};

#endif