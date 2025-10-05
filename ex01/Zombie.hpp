# include <iostream>

class Zombie
{
private:

	std::string _name;

public:

	Zombie(std::string name);
	Zombie();
	void set_name(std::string name);
	void announce(void);
	~Zombie();
	
};

Zombie* zombieHorde( int N, std::string name );