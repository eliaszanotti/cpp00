/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:36:12 by elias             #+#    #+#             */
/*   Updated: 2023/05/04 14:37:32 by elias            ###   ########.fr       */
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

	std::cout << prompt;
	std::getline(std::cin, line);
	return (line);
}

void	Contact::init(void)
{
	this->_firstName = this->_promptInput("First name :");
	this->_lastName = this->_promptInput("Last name :");
	this->_phoneNumber = this->_promptInput("Phone number :");
	this->_email = this->_promptInput("Email :");
}

void	Contact::print(void) const
{
    std::cout << "First name :" << this->_firstName << std::endl;
    std::cout << "Last name :" << this->_lastName << std::endl;	
    std::cout << "Phone number" << this->_phoneNumber << std::endl;	
    std::cout << "Email :" << this->_email << std::endl;	
}
