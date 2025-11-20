#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

	std::cout << _name << "Constructor called." << std::endl;
}

Zombie::Zombie() {

	std::cout << _name << "Constructor called." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << "Desstructor called." << std::endl;
}