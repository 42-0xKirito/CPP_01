# include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(6, "Joe");
	for (int i ; i < 5 ; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
