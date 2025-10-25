#include "FragTrap.hpp"

int main()
{
    std::cout << "Creating FragTrap..." << std::endl;
    FragTrap f("FR4G");

    std::cout << std::endl;
    f.attack("target dummy");
    f.takeDamage(20);
    f.beRepaired(15);
    f.highFivesGuys();

    std::cout << std::endl;
    std::cout << "Destroying FragTrap..." << std::endl;
    return 0;
}
