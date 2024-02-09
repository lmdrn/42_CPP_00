/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:44:03 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/09 13:30:04 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

//INIT ACCOUNTS STARTING VALUES

int	Account::_nbAccounts = 8;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//CONSTRUCTEUR
//
//TODO: Create account with date + index + amount + "created"
//[19920104_091532] index:0;amount:42;created
//
Account::Account(int initial_deposit)
{
	int	index = 0;

	_accountIndex = index++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

}

//DESTRUCTEUR
//
//TODO: Close account with date + index + amount + "closed"
//[19920104_091532] index:0;amount:42;closed
//
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

//TODO: Display all account date + all accounts  + all total + all deposits + all withdrawals
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

void	Account::_displayTimestamp(void)
{
	std::cout << "[20240902_131630] ";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts() << ";amount:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

//TODO: Display all accoutns one by one with date + index + amount + deposists + withdrawals
//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

//TODO: Make deposist + display res with date + index + prev amount + current amount + deposit number
//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	makeDeposit(int deposit)
{

}

//TODO: Make widthdrawal + display res with date + index + prev amount + current amount + deposit number
//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	makeWithdrawal(int withdrawal)
{

}

