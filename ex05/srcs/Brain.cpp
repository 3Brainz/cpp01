#include <Brain.hpp>

Brain::Brain()
{
	this->age = 10;
	this->neurons = 10;
	this->pervert = true;
}

Brain::~Brain()
{
}

std::string	Brain::identify() const
{
	std::stringstream stringS;
	stringS << this;
	return (stringS.str());
}