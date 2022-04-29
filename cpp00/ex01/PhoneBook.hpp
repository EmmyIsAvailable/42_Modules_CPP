#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {

private:
	Contact	repertoire[8];
public:
	void	ft_add();
};

#endif
