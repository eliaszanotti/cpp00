/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:06:20 by elias             #+#    #+#             */
/*   Updated: 2023/05/04 15:28:55 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include "../PhoneBook.class.hpp"
#include "../Contact.class.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::_getIndex(void) const
{
	int		index = -1;
	bool	end = false;
	
	while (!end)
	{
		std::cout << "Index : ";
		std::cin >> index;
		if (std::cin.good() && index >= 0 && index <= 8)
			end = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		    std::cout << "Invalid index ..." << std::endl;
			end = false;
		}
	}
	return (index);
}

void	PhoneBook::addContact(void)
{
	this->_contacts[this->_currentContact].init();
	if (this->_currentContact >= 8)
		this->_currentContact = 0;
	else
		this->_currentContact++;
	this->_size++;
}

void	PhoneBook::printContacts(void) const
{
	for (int i = 0; i < this->_size; i++)
		_contacts[i].print();
}

void	PhoneBook::searchContact(void) const
{
	int	index;

	index = this->_getIndex();
	this->_contacts[index].print();
}
