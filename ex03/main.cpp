#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
	// Create a weapon
	Weapon club = Weapon("crude spiked club");

	// Create HumanA (always has a weapon)
	HumanA bob("Bob", club);
	bob.attack();

	// Change the weapon type
	club.setType("some other type of club");
	bob.attack();

	// Create HumanB (may not have a weapon)
	HumanB jim("Jim");
	jim.attack(); // Jim has no weapon yet

	// Give Jim a weapon
	jim.setWeapon(club);
	jim.attack();

	// Change the weapon type again
	club.setType("another type of club");
	jim.attack();

	return 0;
}