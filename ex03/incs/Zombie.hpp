#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
	std::string type;
public:
	void	setName(std::string name);
	void	setType(std::string type);
	void	announce();
};

#endif