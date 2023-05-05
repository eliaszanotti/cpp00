/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:22:26 by elias             #+#    #+#             */
/*   Updated: 2023/05/05 14:03:32 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class	PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_size;
		int		_currentContact;
		int		_getIndex(void) const;

	public:
		PhoneBook();
		~PhoneBook();
		
		void	addContact(void);
		void	printContacts(void) const;
		void	searchContact(void) const;
};

#endif
