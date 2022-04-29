#include "PhoneBook.hpp"

static void	enter_info(std::string &input, const std::string &data){
	input.clear();
	//std::cout << "\t" << data << ": ";
	//std::getline(std::cin, input);
	while (input.empty())
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
}
