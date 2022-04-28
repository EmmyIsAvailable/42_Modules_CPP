#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main()
{
	std::string input;
	PhoneBook	repertoire;

	while (input.compare("EXIT") != 0)
	{
		std::cout << ">> ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			repertoire.ft_add();
	}
	return (0);
}
