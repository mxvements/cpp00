/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:30:32 by luciama2          #+#    #+#             */
/*   Updated: 2024/09/29 23:11:58 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook		pb;
	std::string		command;
	(void)argc;
	(void)argv;

	while (1) {
		std::getline(std::cin, command);
		if (command == "add")
			pb.add();
		else if (command == "search")
			pb.search();
		else if (command == "exit") {
			pb.exit();
			break ;			
		}
		command = "";
	}
	
	return (0);
}