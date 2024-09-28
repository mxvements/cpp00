/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:42:51 by luciama2          #+#    #+#             */
/*   Updated: 2024/09/28 21:06:18 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

/* constructor */

Contact::Contact(std::string first_name, std::string last_name, std::string email)
{
	this->_first_name =  first_name;
	this->_last_name =  last_name;
	this->_email = email;
}

/* setters */

void Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->_last_name =  last_name;
}

void Contact::set_email(std::string email)
{
	this->_email = email;
}

/* getters */

std::string Contact::get_first_name(void)
{
	return this->_first_name;
}

std::string Contact::get_last_name(void)
{
	return this->_last_name;
}

std::string Contact::get_email(void)
{
	return this->_email;
}
