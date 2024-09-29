/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:42:51 by luciama2          #+#    #+#             */
/*   Updated: 2024/09/29 23:38:15 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void){}
Contact::~Contact(void){}

/* setters */

void Contact::set_index(std::string  index)
{
	this->_index = index;
}

void Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->_last_name =  last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::set_phone_number(std::string  phone_number)
{
	this->_phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

/* getters */

std::string  Contact::get_index(void)
{
	return this->_index;
}

std::string Contact::get_first_name(void)
{
	return this->_first_name;
}

std::string Contact::get_last_name(void)
{
	return this->_last_name;
}

std::string Contact::get_nickname(void)
{
	return this->_nickname;
}

std::string Contact::get_phone_number(void)
{
	return this->_phone_number;
}

std::string Contact::get_darkest_secret(void)
{
	return this->_darkest_secret;
}

void Contact::reset(void)
{
	this->set_index("");
	this->set_first_name("");
	this->set_last_name("");
	this->set_nickname("");
	this->set_phone_number("");
	this->set_darkest_secret("");
}