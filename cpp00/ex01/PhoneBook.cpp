#include "PhoneBook.hpp"

static void	enter_info(std::string &input, const std::string &data){
	input.clear();
	std::cout << "\t" << data << ": ";
	std::getline(std::cin, input, '\n');
	while (input.empty() && !std::cin.eof())
	{
		input.clear();
		std::cout << "\t" << data << ": ";
		std::getline(std::cin, input);
	}
	
}

void	PhoneBook::ft_add(){
	Contact		contact;
	std::string	input;

	std::cout << "Please enter the information of the new contact" << std::endl;
	enter_info(input, "First name");
	contact.add_first_name(input);
	enter_info(input, "Last name");
	contact.add_last_name(input);
	enter_info(input, "Nickname");
	contact.add_nickname(input);
	enter_info(input, "Phone number");
	contact.add_phone_number(input);
	enter_info(input, "Darkest secret");
	contact.add_darkest_secret(input);
}
