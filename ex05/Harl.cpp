# include "Harl.hpp"

Harl::Harl()
{
}

void Harl::debug( void )
{
	std::cout << "Debug" << std::endl;
}
void Harl::info( void )
{
	std::cout << "Info" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "Warning" << std::endl;
}
void Harl::error( void )
{
	std::cout << "Error" << std::endl;
}

void Harl::complain( std::string level )
{
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (int i = 0; i < 4; ++i)
	{
    	if (level == levels[i])
		{
    		(this->*funcs[i])();
			return ;
		}
	}

	std::cout << "Unknow Level" << std::endl;
}

Harl::~Harl()
{
}
