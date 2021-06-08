#include <Human.hpp>

Human::Human()
{
}

Human::~Human()
{
}

const Brain& Human::getBrain() const
{
	return(mind);
}

std::string Human::identify() const
{
	return(mind.identify());
}