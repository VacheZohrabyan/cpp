#include "ClapTrap.hpp"

int main()
{
    std::cout << "=== ClapTrap Creation ===" << std::endl;
    ClapTrap a("Alpha");
    ClapTrap b("Bravo");

    std::cout << "\n=== Basic Attack Test ===" << std::endl;
    a.attack("Bravo");
    b.takeDamage(0); // Since attack damage = 0 initially

    std::cout << "\n=== Increase Damage and Attack Again ===" << std::endl;
    // Simulating internal change for testing (not usually public)
    // You can add a setter or make it public for testing only
    // For now, let's pretend a has more attack power
    std::cout << "(Manually increasing Alpha’s attack damage to 5 for testing)\n";
    a.setAttackDamage(5);
    a.attack("Bravo");
    b.takeDamage(5);

    std::cout << "\n=== Repair Test ===" << std::endl;
    b.beRepaired(3);

    std::cout << "\n=== Energy Depletion Test ===" << std::endl;
    for (int i = 0; i < 10; ++i)
        a.attack("TargetDummy");
    std::cout << "(Now Alpha should have no energy left)\n";
    a.attack("TargetDummy"); // Should not be able to attack

    std::cout << "\n=== Hit Point Depletion Test ===" << std::endl;
    b.takeDamage(100);
    b.attack("Alpha"); // Should not be able to attack
    b.beRepaired(10);  // Should not be able to repair

    std::cout << "\n=== Destructor Test (end of scope) ===" << std::endl;
    return 0;
}
