#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    setHitPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    std::cout << "default construct ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    setHitPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    std::cout << "Constructor ScavTrap" << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignment operator" << std::endl;
    if (this == &other)
        return *this;
    this->setName(other.getName());
    this->setHitPoint(other.getHitPoint());
    this->setEnergyPoint(other.getEnergyPoint());
    this->setAttackDamage(other.getAttackDamage());
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (getHitPoint() <= 0)
    {
        std::cout << "ScavTrap " << getName() << " cannot be repaired: no hit points left!" << std::endl;
        return ;
    }
    if (getEnergyPoint() <= 0)
    {
        std::cout << "ScavTrap " << getName() << " cannot be repaired: no energy left!" << std::endl;
        return ;
    }
    setEnergyPoint(getEnergyPoint() - 1);
    std::cout << "ScavTrap " << getName() << " ferociously attacks " << target
              << ", dealing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " has entered Gate Keeper mode!" << std::endl;
}