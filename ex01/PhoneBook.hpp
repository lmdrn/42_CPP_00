/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:06:50 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/09 11:39:07 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <sstream>
#include <iomanip>
#include <cstdlib>
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
		void	showSingleContact();
	private:
		Contact	_contacts[8];
		int		_index;
		void	truncateStr(std::string str) const;
};

#endif
