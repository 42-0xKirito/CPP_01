# include "HumanB.hpp"
# include "HumanA.hpp"

int main()
{
	Weapon weapon("Hache");
	HumanA humanA("A", weapon);
	humanA.Attack();
	weapon.setType("club");
	humanA.Attack();

	HumanB humanB("B");
	humanB.Attack();
	humanB.setWeapon(weapon);
	humanB.Attack();
	weapon.setType("pique");
	humanB.Attack();

}