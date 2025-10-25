#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hitPoint;
    int energyPoint;
    int attackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setAttackDamage(unsigned int attackDamage);
    void setEnergyPoint(unsigned int energyPoint);
    void setHitPoint(unsigned int hitPoint);
    void setName(const std::string& name);
    int getHitPoint() const;
    int getEnergyPoint() const;
    int getAttackDamage() const;
    std::string getName() const;

};

#endif