#include "Karen.hpp"

void Karen::debug()
{
	std::cout << "\033[1;33m[ DEBUG ]\033[0m\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do.\n\n";
}

void Karen::info()
{
	std::cout << "\033[1;32m[ INFO ]\033[0m\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn\'t put enough bacon in my burger! \nIf you did, I wouldn\'t be asking for more!\n\n";
}

void Karen::warning()
{
	std::cout << "\033[1;35m[ WARNING ]\033[0m\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI\'ve been coming for years whereas you started working here since last month.\n\n";
}

void Karen::error()
{
	std::cout << "\033[1;31m[ ERROR ]\033[0m\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Karen::complain(std::string level)
{
	int i;

	i = 0;
	bool levels[4] ={level == "DEBUG", 
					level == "INFO",
					level == "WARNING",
					level == "ERROR"};
	void (Karen::*functions[])(void) ={&Karen::debug,
									&Karen::info,
									&Karen::warning,
									&Karen::error};
	while (levels[i] != 1)
		i++;
	if (i < 4)
		(this->*functions[i])();
	else
		std::cout << "\033[1;37m[ AHHHH ]\033[0m\n" << "\nPut your headphones. She is going to complain for hours-_-\n" << std::endl;
}