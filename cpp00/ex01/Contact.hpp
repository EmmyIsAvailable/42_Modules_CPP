#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
	
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	void	add_first_name(const std::string &input);
	void	add_last_name(const std::string &input);
	void	add_nickname(const std::string &input);
	void	add_phone_number(const std::string &input);
	void	add_darkest_secret(const std::string &input);
};

#endif
