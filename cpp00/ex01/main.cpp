#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main()
{
	std::string	input;
	PhoneBook	repertoire;

	std::cout << std::endl << "______PHONEBOOK USAGE______" << std::endl;
	std::cout << "Commands : ADD, SEARCH, EXIT" << std::endl << std::endl;
	std::cout << ">> ";
	std::cin >> input;
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
			repertoire.ft_add();
		std::cout << ">> ";
		std::cin >> input;
	}
	return (0);
}
