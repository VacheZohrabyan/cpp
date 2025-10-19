#include "Zombie.hpp"

int main() {
    std::cout << "=== Test 1: Heap allocation with newZombie() ===" << std::endl;
    Zombie* z1 = newZombie("HeapZombie");
    z1->announce();
    delete z1;  // Should trigger destructor message

    std::cout << "\n=== Test 2: Stack allocation with randomChump() ===" << std::endl;
    randomChump("StackZombie");  // Destructor called automatically at end of function

    std::cout << "\n=== Test 3: Multiple Zombies ===" << std::endl;
    Zombie* z2 = newZombie("ZombieA");
    Zombie* z3 = newZombie("ZombieB");
    z2->announce();
    z3->announce();
    delete z2;
    delete z3;

    std::cout << "\n=== Test Finished ===" << std::endl;
    return 0;
}
