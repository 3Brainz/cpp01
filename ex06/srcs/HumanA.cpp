#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon& arma)
{
	this->name = name;
	this->arma = &arma;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name << " Attacks using:" << arma->getType() << std::endl;
}