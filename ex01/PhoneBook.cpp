/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:21:23 by luciama2          #+#    #+#             */
/*   Updated: 2024/09/30 00:34:23 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib> 
#include <sstream>

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created: " << std::endl;
	std::cout << "	Available commands:" << std::endl;
	std::cout << "	> add		Save a new contact" << std::endl;
	std::cout << "	> search	Display a specific contact" << std::endl;
	std::cout << "	> exit		Quit and delete contacts" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		this->_contacts[i].reset();
	}
}

PhoneBook::~PhoneBook(void) {}


/**
 * add		save a new contact
 * The user is prompted to input the information of the new contact one filed at a time
 * Once all the fields have been completed, add the contact to the phonebook
 *
 * it can store a max of 8 contacts, if the user tries to add a 9th contact,
 * replace the oldest one by the new one
 */
void PhoneBook::add(void)
{
	int i = 0;
	std::stringstream index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	for (int j = 0; j < 8; j++)
	{
		if (this->_contacts[j].get_index() == "" || j == 7)
		{
			index << j;
			i = j;
			break;
		}
	}

	std::cout << "Save a new contact:" << std::endl;
	std::cout << "> first_name:" << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "> last_name:" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "> nickname:" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "> phone_number:" << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "> darkest_secret:" << std::endl;
	std::getline(std::cin, darkest_secret);

	this->_contacts[i].set_index(index.str());
	this->_contacts[i].set_first_name(first_name);
	this->_contacts[i].set_last_name(last_name);
	this->_contacts[i].set_nickname(nickname);
	this->_contacts[i].set_phone_number(phone_number);
	this->_contacts[i].set_darkest_secret(darkest_secret);

	std::cout << "	Contact saved!" << std::endl;
	std::cout << "	> Use another command" << std::endl;
}

static void truncate(const std::string &str, size_t max_len)
{
	if (str.length() > max_len)
		std::cout << str.substr(0, max_len - 1).append(".");
	else
		std::cout << str;
}

/**
 * search	display a specific contact
 * display the save contacts as a list of 4 columns, each 10 chars wide:
 * 		index
 * 		first name
 * 		last name
 * 		nickname
 * separated with '|', right-aligned, if the text is longer then its truncated,
 * the last displayable character must be replaced by a '.'
 * 
 * then,
 * prompt the user fot the index of the entry to display
 * if the index is out of range, define a relevant behaviour, otherwise, display
 * the information one field per line
 */
void PhoneBook::search(void)
{
	Contact 	contact;
	std::string index;
	int			i;

	std::cout << "List of contacts:" << std::endl;
	for (int j = 0; j < 8; j++)
	{
		contact = this->_contacts[j];
		std::cout << std::setiosflags(std::ios::left);
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << contact.get_index();
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10);
		truncate(contact.get_first_name(), 10);
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10);
		truncate(contact.get_last_name(), 10);
		std::cout << " | ";
		std::cout << std::setfill(' ') << std::setw(10);
		truncate(contact.get_nickname(), 10);
		std::cout << std::endl;
	}

	std::cout << "No more contacts, type in the idx to show info" << std::endl;
	std::cin >> index;
	i = atoi(index.c_str());

	std::cout << "	> Contact info:" << std::endl;
	std::cout << this->_contacts[i].get_first_name() << std::endl;
	std::cout << this->_contacts[i].get_last_name() << std::endl;
	std::cout << this->_contacts[i].get_nickname() << std::endl;
	std::cout << this->_contacts[i].get_phone_number() << std::endl;
	std::cout << this->_contacts[i].get_darkest_secret() << std::endl;
	std::cout << "	> Use another command" << std::endl;
}

/**
 * exit		quit the program and the contacts are lost forever
 * once a command has been correctly executed, the program waits for another one
 * it stops when the used inputs exit
 */
void PhoneBook::exit(void)
{
	std::cout << "Bye!" << std::endl;
}