/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:16:51 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/08 13:54:18 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	contacts;
	
	while (1)
	{
		std::cout << "                                 " << std::endl;
		std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << std::endl;
		std::cout << "                                 " << std::endl;
		std::cout << "Welcome to the PhoneBook !" << std::endl;
		std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
		std::cout << "                                 " << std::endl;
		std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << std::endl;
		std::cout << "                                 " << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			contacts.addContact();
		else if (input == "SEARCH")
			contacts.searchContact();
		else if (input == "EXIT")
			return (1);
		else
		{
			std::cout << "!! Wrong Usage !!" << std::endl;
			std::cout << "Please type in ADD or SEARCH or EXIT" << std::endl;
		}

	}
	return (0);
}
