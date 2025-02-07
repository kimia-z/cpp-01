#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie *heapZombie = newZombie("Heap zombie");
	heapZombie->announce();
	delete heapZombie;
	randomChump("stack zombie");
	return 0;
}
