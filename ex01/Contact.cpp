/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:05:40 by lmedrano          #+#    #+#             */
/*   Updated: 2024/01/19 15:12:50 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getFirstName() const
{
	return (this->FirstName);
}

std::string	Contact::getLastName() const
{
	return (this->LastName);
}

std::string	Contact::getNickName() const
{
	return (this->Nickname);
}

int	Contact::getPhoneNumber() const
{
	return (this->PhoneNumber);
}

std::string	Contact::getSecret() const
{
	return (this->DarkestSecret);
}
