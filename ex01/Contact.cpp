/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:05:40 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/08 13:22:35 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::getFirstName() const
{
	return (this->_FirstName);
}

std::string	Contact::getLastName() const
{
	return (this->_LastName);
}

std::string	Contact::getNickName() const
{
	return (this->_Nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->_PhoneNumber);
}

std::string	Contact::getSecret() const
{
	return (this->_DarkestSecret);
}

void	Contact::setFirstName(std::string firstName)
{
	this->_FirstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_LastName = lastName;
}

void	Contact::setNickName(std::string nickname)
{
	this->_Nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_PhoneNumber = phoneNumber;
}

void	Contact::setSecret(std::string darkestSecret)
{
	this->_DarkestSecret = darkestSecret;
}
