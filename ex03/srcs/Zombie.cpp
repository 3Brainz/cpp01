#include <Zombie.hpp>

void Zombie::announce()
{
	std::string	phrases[6] = {"Brainz?", "Can i have a brain please", "You can't be my meal", "I like brainz with lime", "T schiatt o cranij","Banana"};
	std::cout << "<" << this->name << " (" << this->type << ")> " << phrases[rand()%6] << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::setType(std::string type)
{
	this->type = type;
}
