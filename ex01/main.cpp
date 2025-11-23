# include "Zombie.hpp"

int main()
{
	int i = 5;
	Zombie *horde = zombieHorde(i, "Joe");
	for ( i = 0 ; i < 5 ; i++ )
	{
		horde[i].announce();
	}
	delete[] horde;
}
