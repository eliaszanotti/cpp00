/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:14:09 by elias             #+#    #+#             */
/*   Updated: 2023/05/05 14:03:27 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//#include <limits>
#include "../PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook book;
	std::string	line = "";

	while (line.compare("EXIT"))
	{
		std::cout << "-> " << std::flush;
		std::cin >> line;
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
	}
	return (0);
}
