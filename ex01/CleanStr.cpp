/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CleanStr.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:19:57 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/09 12:27:05 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CleanStr.hpp"

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
