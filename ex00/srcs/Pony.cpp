#include <Pony.hpp>

void	Pony::ponySummoner(std::string name, std::string color, std::string speed)
{
	this->color = color;
	this->name = name;
	this->speed = speed;
}

void	Pony::lookAtThisPony()
{
	const std::string red("\033[0;31m");
	const std::string green("\033[1;32m");
	const std::string yellow("\033[1;33m");
	const std::string cyan("\033[0;36m");
	const std::string magenta("\033[0;35m");
	const std::string reset("\033[0m");
	std::string color;

	if (this->color == "red")
		color = "\033[0;31m";
	else if (this->color == "green")
		color = "\033[1;32m";
	else if (this->color == "yellow")
		color = "\033[1;33m";
	else if (this->color == "cyan")
		color = "\033[1;36m";
	else if (this->color == "magenta")
		color = "\033[1;35m";
	else
		color = "";
	std::cout << color << PONY << reset <<std::endl;
	std::cout << "Name: " << this->name << " Speed: " << this->speed << std::endl;
}
