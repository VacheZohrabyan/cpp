#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "";
    hitPoint = 10;
    energyPoint = 10;
    attackDamage = 0;
    std::cout << "Default Constructor\n";
}

ClapTrap::ClapTrap(const std::string& name)
{
    this->name = name;
    hitPoint = 10;
    energyPoint = 10;
    attackDamage = 0;
    std::cout << "Constructor " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "Copy Constructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignmend operator" << std::endl;
    if (this == &other)
        return *this;
    name = other.name;
    hitPoint = other.hitPoint;
    energyPoint = other.energyPoint;
    attackDamage = other.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{

}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoint <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot be repaired: no hit points left!" << std::endl;
        return ;
    }
    if (energyPoint <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot be repaired: no energy left!" << std::endl;
        return ;
    }
    --energyPoint;
    std::cout << "ClapTrap " << this->name 
              << " attacks " << target 
              << " causing " << attackDamage 
              << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoint -= amount;
    attackDamage += amount;
    if (hitPoint < 0)
    {
        hitPoint = 0;
        std::cout << "ClapTrap " << name << " cannot be repaired: no hit points left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! (HP: " << hitPoint << ")" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoint <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot be repaired: no hit points left!" << std::endl;
        return ;
    }
    if (energyPoint <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot be repaired: no energy points left!" << std::endl;
        return ;
    }
    hitPoint += amount;
    energyPoint--;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! (HP: " << hitPoint << ")" << std::endl;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    this->attackDamage = attackDamage;
}

void ClapTrap::setEnergyPoint(unsigned int energyPoint)
{
    this->energyPoint = energyPoint;
}

void ClapTrap::setHitPoint(unsigned int hitPoint)
{
    this->hitPoint = hitPoint;
}

void ClapTrap::setName(const std::string &name)
{
    this->name = name;
}

int ClapTrap::getAttackDamage() const
{
    return this->attackDamage;
}

int ClapTrap::getEnergyPoint() const
{
    return this->energyPoint;
}

int ClapTrap::getHitPoint() const
{
    return this->hitPoint;
}

std::string ClapTrap::getName() const
{
    return this->name;
}