#include <Brain.hpp>

class Human
{
private:
	const Brain mind;
public:
	Human();
	~Human();
	std::string	identify() const;
	const Brain&	getBrain() const;
};
