#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : Animal
{
public:
    Cat();
    Cat(const std::string& type);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

public:
    std::string getType() const;
    void makeSound() const;
};

#endif