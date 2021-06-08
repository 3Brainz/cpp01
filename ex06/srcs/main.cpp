#include <HumanA.hpp>

int main()
{
	{
		Weapon	club = Weapon("banana");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("Freesbe");
		bob.attack();
	}
	{
		Weapon	club = Weapon("lima");
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("lime");
		jim.attack();
	}
}