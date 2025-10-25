#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    setName("");
    setAttackDamage(30);
    setEnergyPoint(100);
    setHitPoint(10);
    std::cout << "FragTrap default ctor " << getName() << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    setName(name);
    setAttackDamage(30);
    setEnergyPoint(100);
    setHitPoint(10);
    std::cout << "FragTrap ctor " << getName() << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy ctor " << getName() << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap assignment operator " << getName() << std::endl;
    if (this == &other)
        return *this;
    // this->setAttackDamage(other.getAttackDamage());
    // this->setEnergyPoint(other.getEnergyPoint());
    // this->setHitPoint(other.getHitPoint());
    // this->setName(other.getName());
    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor " << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << " positive high-fives request" << std::endl;
}