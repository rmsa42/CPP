/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:52:49 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/14 00:43:59 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{

}

Account::Account(int initial_deposit) : 
			_accountIndex(_nbAccounts),
			_amount (initial_deposit),
			_nbDeposits(0),
			_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount = _totalAmount + _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	t;
	struct	tm *tt;
	char	buffer[20];
	
	time(&t);
	tt = localtime(&t);
	std::strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", tt);
	std::cout << buffer;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			  << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_totalAmount += deposit;
	_nbDeposits++;
	_amount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount - deposit
			  << ";deposit:" << deposit
			  << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_amount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal
			  << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::getNbAccounts(void) {return (_nbAccounts);}
int	Account::getTotalAmount(void) {return (_totalAmount);}
int	Account::getNbDeposits(void) {return (_totalNbDeposits);}
int	Account::getNbWithdrawals(void) {return (_totalNbWithdrawals);}
int	Account::checkAmount(void) const {return (_amount);}
