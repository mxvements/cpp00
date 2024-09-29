#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	Contact
{
	private:
		std::string	_index;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string _phone_number;
		std::string	_darkest_secret;

	public:
		Contact(void);
		~Contact();
		void set_index(std::string  index);
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_phone_number(std::string  phone_number);
		void set_darkest_secret(std::string darkest_string);
		std::string get_index(void);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nickname(void);
		std::string  get_phone_number(void);
		std::string get_darkest_secret(void);
		void reset(void);
};

#endif