#include "PhoneBook.hpp"
#include <stdio.h>
#include <string.h>

int main()
{
	int 		index;
	std::string input;
	PhoneBook 	phoneBook;


	while (input != "EXIT")
	{
		if (input == "ADD")
			phoneBook.add();
		else if (input == "SEARCH")
		{
			phoneBook.display();
			std::cout << "Please enter the index of the contact!" << std::endl;
			std::getline(std::cin, input);
			index = std::strtol(input.c_str(), NULL, 10);
			while (index <= 0 || index > phoneBook.get_size())
			{
				std::cout << "Wrong index, please enter another one!" << std::endl;
				std::getline(std::cin, input);
				index = std::strtol(input.c_str(), NULL, 10);
			}
			phoneBook.search(index);
		}
		std::cout << "Enter the command: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
	}
}