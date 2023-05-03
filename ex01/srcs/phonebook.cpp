/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:06:20 by elias             #+#    #+#             */
/*   Updated: 2023/05/03 17:59:08 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.class.h"
#include "../includes/Contact.class.h"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
	this->index = 0;
}

void	PhoneBook::addContact(std::string firstName, std::string lastName, \
		std::string phoneNumber, std::string email)
{
	this->contacts[this->index] = Contact(firstName, lastName, \
			phoneNumber, email);
	if (this->index >= 8)
		this->index = 0;
	else
		this->index++;
}

void	PhoneBook::listContact()
{
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << contacts[i].getFirstName << std::endl;
		std::cout << contacts[i].getLastName << std::endl;
		std::cout << contacts[i].getPhoneNumber << std::endl;
		std::cout << contacts[i].getEmail << std::endl;
	}
}

void	PhoneBook::showContact(int i)
{
	std::cout << contacts[i].getFirstName << std::endl;
	std::cout << contacts[i].getLastName << std::endl;
	std::cout << contacts[i].getPhoneNumber << std::endl;
	std::cout << contacts[i].getEmail << std::endl;
}

int	PhoneBook::countContact()
{
	return (contactCount);
}
