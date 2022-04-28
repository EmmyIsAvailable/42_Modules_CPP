#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook {

public:
	Contact	repertoire[8];

	void	ft_add(){
		std::cout << "Please enter the information of the new contact" << std::endl;
	}
};

#endif
