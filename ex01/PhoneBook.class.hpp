/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:22:26 by elias             #+#    #+#             */
/*   Updated: 2023/05/04 14:24:54 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

class	PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_currentContact;
		int		_size;

		int		_getIndex(void) const;

	public:
		PhoneBook();
		~PhoneBook();
		
		void	addContact(void);
		void	printContacts(void) const;
		void	searchContact(void) const;
};

#endif
