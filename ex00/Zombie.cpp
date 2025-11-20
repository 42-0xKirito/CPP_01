#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

	std::cout << _name << "Constructor called." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << "Desctructor called." << std::endl;
}