/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:14:09 by elias             #+#    #+#             */
/*   Updated: 2023/05/04 14:30:15 by elias            ###   ########.fr       */
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
		std::cout << "prompt> ";
		std::cin >> line;
		if (!line.compare("ADD"))
			book.addContact();
		else if (!line.compare("SEARCH"))
		{
			book.printContacts();
			book.searchContact();
		}
	}
	return (0);
}
