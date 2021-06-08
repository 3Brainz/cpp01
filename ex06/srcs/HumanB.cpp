#include <HumanB.hpp>


HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(Weapon& arma)
{
	this->arma = &arma;
}

void	HumanB::attack()
{
	std::cout << this->name << " Attacks using:" << arma->getType() << std::endl;
}
