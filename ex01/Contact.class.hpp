/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <zanotti.elias@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:48:44 by elias             #+#    #+#             */
/*   Updated: 2023/05/05 13:37:27 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iomanip>
#include <iostream>
#include <limits>

class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		int			_index;

		std::string	_promptInput(std::string) const;
		std::string	_printColumn(std::string) const;

	public:
		Contact();
		~Contact();

		void	newContact(void);
		void	printLine(void) const;
		void	print(void) const;
		void	setIndex(int index);
};

#endif
