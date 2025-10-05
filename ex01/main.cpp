# include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(1, "name");
	horde[0].announce();
	delete[] horde;
}