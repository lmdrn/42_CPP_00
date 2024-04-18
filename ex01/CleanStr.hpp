/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CleanStr.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:23:27 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/09 12:27:10 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLEANSTR_HPP
# define CLEANSTR_HPP

#include <string>

void	removeSpaces(std::string str);
int	only_alpha(std::string str);
int	only_digit(std::string str);

#endif
