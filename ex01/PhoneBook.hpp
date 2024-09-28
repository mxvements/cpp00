#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
		
	public:
		PhoneBook(void);
		~PhoneBook();
		void add_contact(Contact contact);
		void search_contact(Contact contact);
		void delete_contacts(void);
};

#endif