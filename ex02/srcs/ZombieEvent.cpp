#include <ZombieEvent.hpp>

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	ret;
	ret = new Zombie;
	ret->setType(this->type);
	ret->setName(name);
	return (ret);
}

void	ZombieEvent::randomChump()
{
	Zombie		chump;
	std::string	names[5] = {"James", "Erik", "Spaccaossa", "tino", "pino"}; 

	chump.setName(names[rand() % 5]);
	chump.setType(this->type);
	chump.announce();
}