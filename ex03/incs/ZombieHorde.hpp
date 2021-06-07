#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include <Zombie.hpp>

class ZombieHorde
{
private:
	Zombie*	horde;
public:
	ZombieHorde(int N);
	void	populateHorde(int N);
	void	announceHorde(int N);
	void	freeHorde();
};

#endif