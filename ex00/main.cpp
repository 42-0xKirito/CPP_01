# include "Zombie.hpp"

int main()
{
	Zombie *z = newZombie("Test");

	randomChump("test");
	z->announce();
	delete (z);
}