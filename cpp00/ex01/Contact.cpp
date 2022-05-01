#include "Contact.hpp"

void	Contact::add_first_name(const std::string &input){
	Contact::first_name = input;
}

void	Contact::add_last_name(const std::string &input){
	Contact::last_name = input;
}

void	Contact::add_nickname(const std::string &input){
	Contact::nickname = input;
}

void	Contact::add_phone_number(const std::string &input){
	Contact::phone_number = input;
}

void	Contact::add_darkest_secret(const std::string &input){
	Contact::darkest_secret = input;
}
