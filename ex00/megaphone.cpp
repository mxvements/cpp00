/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:14:32 by luciama2          #+#    #+#             */
/*   Updated: 2024/09/28 18:25:35 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>  // For toupper
#include <cstring> // For strlen

/**
 * mehaphone.cpp
 *
 * returns
 * 	if argc > 1 -> prints the string provided in argv[1] in uppercase
 * 	if argc == 1 -> prints: * LOUD AND UNBEARABLE FEEDBACK NOISE *
 */

static void megaphone(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return;
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < (int)std::strlen(argv[i]); j++)
		{
			std::cout << (char)std::toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	megaphone(argc, argv);
	return (0);
}