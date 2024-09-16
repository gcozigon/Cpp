#include "HarlFilter.hpp"

Harl::Harl()
{
	// std::cout << std::endl;
}

Harl::~Harl()
{
	// std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	size_t	i;

	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++)
	{
		if (level == tab[i])
			break;
	}
    switch (i)
    {
        case 0:
			Harl::debug();
        case 1:
			Harl::info();
        case 2:
			Harl::warning();
        case 3:
			Harl::error();
    }
	return ;
}

void Harl::debug()
{
	std::cout << "\033[31m" << "[" "DEBUG" "]" <<  "\033[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info()
{
	std::cout << "\033[31m" << "[" "INFO" "]" << "\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning()
{
	std::cout << "\033[31m" << "[" "WARNING" "]" << "\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "\033[31m" << "[" "ERROR" "]" << "\033[0m" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
