#include "Zombie.hpp"

int main() {
    std::cout << "=== Test 1: Normal horde of 5 zombies ===" << std::endl;
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;

    std::cout << "\n=== Test 2: Single zombie horde (N = 1) ===" << std::endl;
    Zombie* single = zombieHorde(1, "SoloZombie");
    single[0].announce();
    delete[] single;

    std::cout << "\n=== Test 3: Zero zombies (N = 0) ===" << std::endl;
    Zombie* empty = zombieHorde(0, "Nobody");
    if (!empty)
        std::cout << "No zombies created (good behavior)\n";

    std::cout << "\n=== Test 4: Negative number of zombies (N = -3) ===" << std::endl;
    Zombie* negative = zombieHorde(-3, "GhostZombie");
    if (!negative)
        std::cout << "No zombies created (good behavior)\n";

    std::cout << "\n=== Test Finished ===" << std::endl;
    return 0;
}
