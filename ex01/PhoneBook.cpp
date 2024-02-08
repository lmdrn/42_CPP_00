/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:06:18 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/08 18:44:04 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "                                 " << std::endl;
	std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << std::endl;
	std::cout << "                                 " << std::endl;
	std::cout << "Thank you for using the PhoneBook" << std::endl;
	std::cout << "Byyyyyyye & Come back soon :)" << std::endl;
	std::cout << "                                 " << std::endl;
	std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << std::endl;
	std::cout << "                                 " << std::endl;
}

int	only_alpha(std::string str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!std::isalpha(str[i]) && str[i] != ' ' && str[i] != '\t')
			return (1);
		i++;
	}
	return (0);
}

int	only_digit(std::string str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]) && str[i] != ' ' && str[i] != '\t')
			return (1);
		i++;
	}
	return (0);
}

void	removeSpaces(std::string str)
{
	std::string res;
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			res += str[i];
		i++;
	}
	str = res;
}

void	PhoneBook::addContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
	Contact		contact;
	int			flag;

	std::cout << "                                        " << std::endl;
	std::cout << "----- Let's create a new contact ! -----" << std::endl;
	std::cout << "                                        " << std::endl;
	flag = 0;
	while (firstName.length() == 0 || flag == 1)
	{
		std::cout << "First name:" << std::endl;
		std::getline(std::cin, firstName);
		if (only_alpha(firstName) || firstName.empty())
		{
			std::cout << "Wrong or empty input !" << std::endl;
			flag = 1;
		}
		else
		{
			contact.setFirstName(firstName);
			flag = 0;
		}
	}
	while (lastName.length() == 0 || flag == 1)
	{
		std::cout << "Last name:" << std::endl;
		std::getline(std::cin, lastName);
		if (only_alpha(lastName) || lastName.empty())
		{
			std::cout << "Wrong or empty input !" << std::endl;
			flag = 1;
		}
		else
		{
			contact.setLastName(lastName);
			flag = 0;
		}
	}
	while (nickname.length() == 0 || flag == 1)
	{
		std::cout << "Nickname:" << std::endl;
		std::getline(std::cin, nickname);
		if (only_alpha(nickname) || nickname.empty())
		{
			std::cout << "Wrong or empty input !" << std::endl;
			flag = 1;
		}
		else
		{
			contact.setNickName(nickname);
			flag = 0;
		}
	}
	while (phoneNumber.length() == 0 || flag == 1)
	{
		std::cout << "Hey mademoiselle, c'est quoi ton 06 ?:" << std::endl;
		std::getline(std::cin, phoneNumber);
		if (only_digit(phoneNumber) || phoneNumber.empty())
		{
			std::cout << "Wrong or empty input !" << std::endl;
			flag = 1;
		}
		else
		{
			removeSpaces(phoneNumber);
			contact.setPhoneNumber(phoneNumber);
			flag = 0;
		}
	}
	while (darkestSecret.length() == 0 || flag == 1)
	{
		std::cout << "What is your darkest secret ? :)" << std::endl;
		std::getline(std::cin, darkestSecret);
		if (only_alpha(darkestSecret) || darkestSecret.empty())
		{
			std::cout << "Wrong or empty input !" << std::endl;
			flag = 1;
		}
		else
		{
			contact.setSecret(darkestSecret);
			flag = 0;
		}
	}
	this->_contacts[this->_index] = contact;
	this->_index++;
	std::cout << "                                        " << std::endl;
	std::cout << "----- Contact created ! -----" << std::endl;
	std::cout << "                                        " << std::endl;
}

void	PhoneBook::showSingleContact()
{	
	std::string input;
	int			strToInt;
	int			index = 0;
	
	std::cout << "           " << std::endl;
	std::cout << "Which contact do you wish to see ? Please enter correct index :)" << std::endl;
	std::cout << "           " << std::endl;
	std::getline(std::cin, input);
	strToInt = atoi(input.c_str());
	if (input.empty())
	{
		std::cout << "           " << std::endl;
		std::cout << "Please enter an index between 1 and 8" << std::endl;
		std::cout << "           " << std::endl;
	}
	if (strToInt > 0 && strToInt < 9 && input.length() == 1)
	{
		while (index < 9)
		{
			if (strToInt == index)
			{
				std::cout << std::setw(10) << strToInt <<  "|";
				std::cout << std::setw(10) << this->_contacts[strToInt - 1].getFirstName().substr(0, 10) + '.' << "|";
				std::cout << std::setw(10) << this->_contacts[strToInt - 1].getLastName().substr(0, 10) + '.' << "|";
				std::cout << std::setw(10) << this->_contacts[strToInt - 1].getNickName().substr(0, 10) + '.' << "|";
				std::cout << std::setw(10) << this->_contacts[strToInt - 1].getPhoneNumber().substr(0, 10) + '.' << "|";
				std::cout << std::setw(10) << this->_contacts[strToInt - 1].getSecret().substr(0, 10) + '.' << "|";
				std::cout << std::setw(10) << "" <<  std::endl;
			}
			index++;
		}	
	}
	else
	{
		std::cout << "           " << std::endl;
		std::cout << "-- ERROR --" << std::endl;
		std::cout << "           " << std::endl;
		std::cout << "Index should be withing 1 to 8 range" << std::endl;
		std::cout << "           " << std::endl;
		return ;
	}		

}

void	PhoneBook::searchContact()
{
	int	i;

	i = 0;

	if (this->_index == 0)
	{
		std::cout << "                          " << std::endl;
		std::cout << "No contacts to show yet..." << std::endl;
		std::cout << "                          " << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" <<  "|";
	std::cout << std::setw(10) << "First Name" <<  "|";
	std::cout << std::setw(10) << "Last Name" <<  "|";
	std::cout << std::setw(10) << "Nickname" <<  "|";
	std::cout << std::setw(10) << "" <<  std::endl;

	while (i < this->_index)
	{
		std::cout << std::setw(10) << i + 1 <<  "|";
		std::cout << std::setw(10) << this->_contacts[i].getFirstName().substr(0, 10) + '.' << "|";
		std::cout << std::setw(10) << this->_contacts[i].getLastName().substr(0, 10) + '.' << "|";
		std::cout << std::setw(10) << this->_contacts[i].getNickName().substr(0, 10) + '.' << "|";
		std::cout << std::setw(10) << "" <<  std::endl;
		i++;
	}
	showSingleContact();
}
