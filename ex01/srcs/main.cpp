/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:14:09 by elias             #+#    #+#             */
/*   Updated: 2023/06/28 16:08:15 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook book;
	std::string	line = "";

	while (line.compare("EXIT"))
	{
		std::cout << "-> " << std::flush;
		std::cin >> line;
		if (std::cin.eof())
			return (0);
		if (!line.compare("ADD"))
		{
			book.addContact();
			std::cout << std::endl;
		}
		else if (!line.compare("SEARCH"))
		{
			book.printContacts();
			std::cout << std::endl;
			book.searchContact();
			std::cout << std::endl;
		}
		else if (line.compare("EXIT"))
			std::cout << "command not found: " << line << std::endl;
	}
	return (0);
}
