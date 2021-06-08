#include <HumanB.hpp>

class HumanA
{
private:
	Weapon* arma;
	std::string	name;
public:
	HumanA(std::string name, Weapon& arma);
	void	attack();
	~HumanA();
};
