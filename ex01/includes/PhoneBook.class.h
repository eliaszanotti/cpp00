/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:22:26 by elias             #+#    #+#             */
/*   Updated: 2023/05/03 17:35:18 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include "Contact.class.h"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		contactCount;
		int		index;

	public:
		PhoneBook();
		
		void	addContact(std::string firstName, std::string lastName, \
					std::string phoneNumber, std::string email);
		void	listContact();
		void	showContact(int index);
		int		countContact();
};

#endif
