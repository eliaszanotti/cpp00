/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:14:09 by elias             #+#    #+#             */
/*   Updated: 2023/05/04 15:01:08 by elias            ###   ########.fr       */
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
		std::cout << "prompt> " << std::flush;
		std::getline(std::cin, line);
		if (!line.compare("ADD"))
			book.addContact();
		else if (!line.compare("SEARCH"))
		{
			book.printContacts();
			std::cout << std::endl;
			book.searchContact();
		}
	}
	return (0);
}
