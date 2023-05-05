/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:36:12 by elias             #+#    #+#             */
/*   Updated: 2023/05/05 13:52:14 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Contact.class.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::_promptInput(std::string prompt) const
{
	std::string	line = "";
	bool		validInput = false;

	while (!validInput)
	{
		std::cout << prompt << std::flush;
		std::getline(std::cin, line);
		if (std::cin.good() && !line.empty())
			validInput = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid input..." << std::endl;
		}
	}
	return (line);
}

std::string	Contact::_printColumn(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::newContact(void)
{
	std::cin.ignore();
	this->_firstName = this->_promptInput("First name : ");
	this->_lastName = this->_promptInput("Last name : ");
	this->_nickName = this->_promptInput("Nickname : ");
	this->_phoneNumber = this->_promptInput("Phone number : ");
	this->_darkestSecret = this->_promptInput("Darkest secret : ");
	std::cout << std::endl;
}

void	Contact::printLine(void) const
{
    std::cout << std::setw(10) << this->_index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printColumn(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printColumn(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printColumn(this->_nickName) << std::flush;
	std::cout << std::endl;
}

void	Contact::print(void) const
{
	std::cout << std::endl;
	std::cout << "--- Contact ---" << std::endl;
    std::cout << "First name : " << this->_firstName << std::endl;
    std::cout << "Last name : " << this->_lastName << std::endl;	
    std::cout << "Nickname : " << this->_nickName << std::endl;	
    std::cout << "Phone number : " << this->_phoneNumber << std::endl;	
    std::cout << "Darkest secret : " << this->_darkestSecret << std::endl;
}

void	Contact::setIndex(int index)
{
	this->_index = index;
}
