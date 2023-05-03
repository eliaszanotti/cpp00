/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:48:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/03 17:41:04 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
	
class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_phoneNumber;
		std::string	_email;

	public:
		Contact(std::string firstName, std::string lastName, \
				std::string phoneNumber, std::string email);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getPhoneNumber();
		std::string	getEmail();
};

#endif
