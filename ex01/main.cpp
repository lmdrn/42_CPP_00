/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:16:51 by lmedrano          #+#    #+#             */
/*   Updated: 2024/01/31 16:37:46 by lmedrano         ###   ########.fr       */
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
		if (input == "ADD")
		{
			contacts.setContact();
		}
		else if (input == "SEARCH")
		{
			contacts.getContact();
		}
		else if (input == "EXIT")
		{
			return (1);
		}
	}
	return (0);
}
