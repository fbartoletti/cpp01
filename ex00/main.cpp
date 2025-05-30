#include "Zombie.hpp"

int main(){
    std::cout << "Creating a zombie on the heap: " << std::endl;
    Zombie* heapZombie = newZombie("heaphippoZombie");
    heapZombie->announce();
    std::cout << "\nDestroying zombie on heap: " << std::endl;
    delete(heapZombie);
    std::cout << "\nCreating a zombie on the stack: " << std::endl;
    randomChump("stackcrackZombie");
    return(0);
};
