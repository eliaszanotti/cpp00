/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:36:12 by elias             #+#    #+#             */
/*   Updated: 2023/05/03 17:44:53 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.h"

Contact::Contact(std::string firstName, std::string lastName, \
		std::string phoneNumber, std::string email);
{
	_firstName = firstName;
	_lastName = lastName;
	_phoneNumber = phoneNumber;
	_email = email;
}

std::string	Contact::getFirstName()
{
	return (_firstName);
}

std::string	Contact::getLastName()
{
	return (_lastName);
}

std::string	Contact::getPhoneNumber()
{
	return (_phoneNumber);
}

std::string	Contact::getEmail()
{
	return (_email);
}
