#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _email;

	public:
		Contact(std::string first_name, std::string last_name, std::string email);
		~Contact();
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_email(std::string email);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_email(void);
};

#endif