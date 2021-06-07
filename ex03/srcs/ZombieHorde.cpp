#include <ZombieHorde.hpp>

void	ZombieHorde::populateHorde(int N)
{
	int n = 0;
	std::string	names[]= {"Giorgio", "Ciro", "Giuseppe", "Lucia", "Marica", "Luigia", "Fambert"};

	while (n < N)
	{
		this->horde[n].setName(names[rand() % 7]);
		this->horde[n].setType("Loffoso");
		n += 1;
	}
}

void	ZombieHorde::announceHorde(int N)
{
	int n = 0;

	while (n < N)
	{
		this->horde[n].announce();
		n += 1;
	}
}

void	ZombieHorde::freeHorde()
{
	delete[] this->horde;
}

ZombieHorde::ZombieHorde(int N)
{
	this->horde = new Zombie[N];
	srand((unsigned int)time(NULL));
	this->populateHorde(N);
	this->announceHorde(N);
}
