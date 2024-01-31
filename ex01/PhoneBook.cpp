/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:06:18 by lmedrano          #+#    #+#             */
/*   Updated: 2024/01/31 17:57:08 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cctype>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to the PhoneBook !" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Byyyyyyye ! Come back soon :)" << std::endl;
}

int	only_alpha(std::string str)
{
	int		i;
	int		ok;

	i = 0;
	while (str[i])
	{
		if (std::isalpha(str[i]))
			ok = 0;
		else
			ok = 1;
		i++;
	}
	return (ok);
}

int	only_digit(std::string str)
{
	int		i;
	int		ok;

	i = 0;
	while (str[i])
	{
		if (std::isdigit(str[i]))
			ok = 0;
		else
			ok = 1;
		i++;
	}
	return (ok);
}

void	PhoneBook::addContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
	Contact		contact;

	std::cout << "----- Let's create a new contact ! -----" << std::endl;
	if (firstName.length() == 0)
	{
		std::cout << "First name:" << std::endl;
		std::getline(std::cin, firstName);
		if (only_alpha(firstName))
			std::cout << "wrong input bro" << std::endl;
		else
			contact.setFirstName(firstName);
	}
	if (lastName.length() == 0)
	{
		std::cout << "Last name:" << std::endl;
		std::getline(std::cin, lastName);
		if (only_alpha(lastName))
			std::cout << "wrong input bro" << std::endl;
		else
			contact.setLastName(lastName);
	}
	if (nickname.length() == 0)
	{
		std::cout << "Nickname:" << std::endl;
		std::getline(std::cin, nickname);
		if (only_alpha(nickname))
			std::cout << "wrong input bro" << std::endl;
		else
			contact.setNickName(nickname);
	}
	if (phoneNumber.length() == 0)
	{
		std::cout << "Hey mademoiselle, c'est quoi ton 06 ?:" << std::endl;
		std::getline(std::cin, phoneNumber);
		if (only_digit(phoneNumber))
			std::cout << "only numbers sis" << std::endl;
		else
			contact.setPhoneNumber(phoneNumber);
	}
	if (darkestSecret.length() == 0)
	{
		std::cout << "What is your darkest secret ? :)" << std::endl;
		std::getline(std::cin, darkestSecret);
		if (only_alpha(darkestSecret))
			std::cout << "wrong input bro" << std::endl;
		else
			contact.setSecret(darkestSecret);
	}
	this->_contacts[this->_index] = contact;
	this->_index++;
	std::cout << "----- Contact created ! -----" << std::endl;
}

void	showSingleContact()
{	
	int	index;
	
	std::cout << "Which contact do you wish to see ? Please enter correct index :)" << std::endl;
	std::cin >> index;
	std::cin.ignore();
	if (index >= 0 && index < this->_index)
	{
		std::cout << std::setw(10) << index <<  "|";
		std::cout << std::setw(10) << this->_contacts[index].getFirstName().substr(0, 10 - 1) + '.' << std::endl;
		std::cout << std::setw(10) << this->_contacts[index].getLastName().substr(0, 10 - 1) + '.' << std::endl;
		std::cout << std::setw(10) << this->_contacts[index].getNickName().substr(0, 10 - 1) + '.' << std::endl;
	}
}

void	PhoneBook::searchContact()
{
	int	i;

	i = 0;

	if (this->_index == 0)
		std::cout << "No contacts to show yet..." << std::endl;
	
	std::cout << std::setw(10) << "Index" <<  "|";
	std::cout << std::setw(10) << "First Name" <<  "|";
	std::cout << std::setw(10) << "Last Name" <<  "|";
	std::cout << std::setw(10) << " Nickname" <<  "|";

	while (i < this->_index)
	{
		std::cout << std::setw(10) << i <<  "|";
		std::cout << std::setw(10) << this->_contacts[i].getFirstName().substr(0, 10 - 1) + '.' << "|";
		std::cout << std::setw(10) << this->_contacts[i].getLastName().substr(0, 10 - 1) + '.' << "|";
		std::cout << std::setw(10) << this->_contacts[i].getNickName().substr(0, 10 - 1) + '.' << "|";
		i++;
	}
}
