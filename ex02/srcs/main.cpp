#include <ZombieEvent.hpp>

int main()
{
	Zombie	zombie1;
	Zombie*	zombie2;
	ZombieEvent zombievent1;

	srand((unsigned int)time(NULL));
	zombie1.setName("Z1");
	zombie1.setType("Type1");
	zombie1.announce();
	zombievent1.setZombieType("Intellectual");
	zombie2 = zombievent1.newZombie("Pottolo");
	zombie2->announce();
	delete zombie2;
	zombievent1.randomChump();
}