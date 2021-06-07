#include <string>
#include <iostream>

int main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	bPointer = &brain;
	std::string&	bref = brain;

	std::cout << "Pointer: "<< *bPointer << std::endl;
	std::cout << "Ref: " << bref << std::endl;
}