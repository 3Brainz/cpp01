#include <Pony.hpp>

std::string	randName()
{
	std::string names[6] = {"Gilberto", "Bausha", "Beggio", "Cospirazione", "Werty", "Fottolo"};
	return(names[rand() % 6]);
}

std::string	randColor()
{
	std::string colors[6] = {"red", "green", "yellow", "blue", "cyan", "magenta"};
	return(colors[rand() % 6]);
}

std::string	randSpeed()
{
	std::string names[6] = {"Fast", "Really fast", "Slow", "Slow AF", "Blue shell", "Rare"};
	return(names[rand() % 6]);
}

void	ponyOnTheHeap()
{
	Pony *pony;
	
	pony = new Pony;
	pony->ponySummoner(randName(), randColor(), randSpeed());
	pony->lookAtThisPony();
	std::cout << "Look at my awesome heap look" << std::endl;
	delete pony;
}

void	ponyOnTheStack()
{
	Pony	pony;

	pony.ponySummoner(randName(), randColor(), randSpeed());
	pony.lookAtThisPony();
	std::cout << "Look at my awesome stack look" << std::endl;
}

int main()
{
	srand((unsigned int)time(NULL));
	ponyOnTheHeap();
	ponyOnTheStack();
}