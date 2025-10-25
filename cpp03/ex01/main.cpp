#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Creating a ClapTrap ===" << std::endl;
    ClapTrap clap("Clappy");

    std::cout << "\n=== Creating a ScavTrap ===" << std::endl;
    ScavTrap scav("Scavy");

    std::cout << "\n=== Testing ScavTrap attack() ===" << std::endl;
    scav.attack("a wild enemy");

    std::cout << "\n=== Testing ScavTrap special ability ===" << std::endl;
    scav.guardGate();

    std::cout << "\n=== Testing inherited functions ===" << std::endl;
    scav.takeDamage(30);
    scav.beRepaired(20);

    std::cout << "\n=== Testing energy/hit point limits ===" << std::endl;
    for (int i = 0; i < 51; ++i)
        scav.attack("Training dummy");

    std::cout << "\n=== End of scope (destructors called) ===" << std::endl;
    return 0;
}
