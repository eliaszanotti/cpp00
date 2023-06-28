/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:06:20 by elias             #+#    #+#             */
/*   Updated: 2023/06/28 16:02:31 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.class.hpp"
#include "../Contact.class.hpp"

PhoneBook::PhoneBook()
{
	this->_currentContact = 0;
	this->_size = 0;
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::_getIndex(void) const
{
	int		index = -1;
	bool	validInput = false;
	
	while (!validInput)
	{
		std::cout << "Index : ";
		std::cin >> index;
		if (std::cin.eof())
			break ;
		if (std::cin.good() && index >= 0 && index <= 8)
		{
			if (index >= this->_size)
			{
				std::cout << "Contact empty !" << std::endl;
				return (-1);
			}
			validInput = true;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		    std::cout << "Invalid index ..." << std::endl;
		}
	}
	return (index);
}

void	PhoneBook::addContact(void)
{
	if (this->_currentContact == 8)
		this->_currentContact = 0;
	if (this->_size < 8)
		this->_size++;
	this->_contacts[this->_currentContact].newContact();
	this->_contacts[this->_currentContact].setIndex(this->_currentContact);
	this->_currentContact++;
}

void	PhoneBook::printContacts(void) const
{
	std::cout << "----------------- Contacts ----------------" << std::endl;
	for (int i = 0; i < this->_size; i++)
		_contacts[i].printLine();
}

void	PhoneBook::searchContact(void) const
{
	int	index;

	index = this->_getIndex();
	if (index != -1)
		this->_contacts[index].print();
}
