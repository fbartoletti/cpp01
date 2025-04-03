#include "Zombie.hpp"

int main(){
	int numZombies = 5;
	std::string ZombieName("SwagZombie");
	std::cout << "Creating a horde of " << numZombies << " zombie: " << std::endl;
	Zombie* horde = zombieHorde(numZombies, ZombieName);
	for (int i = 0; i < numZombies; i++){
		std::cout << "Zombie #" << (i + 1) << ": ";
		horde[i].announce();
	}
	std::cout << "\nDestruction of the zombie horde: " << std::endl;
	delete[] horde;
	return 0;
}
