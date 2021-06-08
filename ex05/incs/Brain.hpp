#include <iostream>
#include <string>
#include <sstream>

class Brain
{
private:
	int		neurons;
	int		age;
	bool	pervert;
public:
	Brain();
	~Brain();
	std::string identify() const;
};
