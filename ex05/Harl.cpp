#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my"
		<< " 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
			<< " You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"
			<< std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			<< " Ive been coming for years whereas you started working here since last month."
			<< std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			<< std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*class_ptr[4]) (void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int flag = 5;
	for (int i=0; i<4; i++)
	{
		if (level == levels[i])
		{
			flag = i;
			break;
		}
	}
	if (flag == 5)
		std ::cout << "UNKNOWN LEVEL!" << std::endl;
	else
		(this->*class_ptr[flag])();
}