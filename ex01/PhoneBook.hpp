/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:06:50 by lmedrano          #+#    #+#             */
/*   Updated: 2024/01/22 15:18:00 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
	public:
		void	setContact();
		void	setEraseExit();
		void	getContact() const;
};

void	PhoneBook::setContact()
{}

void	PhoneBook::setEraseExit()
{}

void	PhoneBook::getContact() const
{}

#endif
