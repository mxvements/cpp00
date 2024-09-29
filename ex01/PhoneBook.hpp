#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

class PhoneBook {
	private:
		Contact _contacts[8];
		
	public:
		PhoneBook();
		~PhoneBook();
		void add(void);
		void search(void);
		void exit(void);
};

#endif