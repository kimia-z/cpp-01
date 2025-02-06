#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie *horde = zombieHorde(5, "hordeZumbies");
	for (int i=0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
