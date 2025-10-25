#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* animal = new Animal();
    Cat* cat = new Cat();
    Dog* dog = new Dog();

    std::cout << animal->getType() << std::endl;
    animal->makeSound();

    std::cout << cat->getType() << std::endl;
    cat->makeSound();

    std::cout << dog->getType() << std::endl;
    dog->makeSound();
    delete animal;
    delete cat;
    delete dog;

    Cat* cat1 = new Animal("cat");cd 

}