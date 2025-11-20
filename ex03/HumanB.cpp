# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) , _weapon(NULL)
{
	std::cout << "HumanB Constructor called." << std::endl;
}

void HumanB::Attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor called." << std::endl;
}