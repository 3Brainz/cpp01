#include <Weapon.hpp>

class HumanB
{
private:
	Weapon* arma;
	std::string	name;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon& arma);
};
