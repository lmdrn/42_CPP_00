/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:06:50 by lmedrano          #+#    #+#             */
/*   Updated: 2024/01/31 17:58:35 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
		/* -- Constructor -- */
		PhoneBook();
		/* -- Destructor -- */
		~PhoneBook();
		void	addContact();
		void	searchContact();
	private:
		Contact	_contacts[8];
		int		_index;
};

#endif
