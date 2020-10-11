/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:19:52 by gbright           #+#    #+#             */
/*   Updated: 2020/09/14 16:52:56 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "closed\n";

}

Account::Account(void)
{
	static int      n;

	_accountIndex = n;
        n++;
	counter = 0;
	_amount = 0;
        _nbDeposits = 0;
        _nbWithdrawals = 0;
        _nbAccounts++;

        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ';';
        std::cout << "amount:" << _amount << ';';
        std::cout << "created\n";
}

Account::Account(int initial_deposit)
{
	static int	n;

	counter = 0;
	_accountIndex = n;
	n++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
        std::cout << "amount:" << _amount << ';';
        std::cout << "created\n";
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
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = _amount;

	_nbDeposits++;
	_totalNbDeposits++;
	_amount = _amount + deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << p_amount << ';';
	std::cout << "deposit:" << _amount - p_amount << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount;

        p_amount = _amount;
	if (withdrawal <= _amount)
	{
		p_amount = _amount;
		_amount = _amount - withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_displayTimestamp();
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ';';
		std::cout << "p_amount:" << p_amount << ';';
		std::cout << "withdrawal:" << p_amount - _amount << ';';
		std::cout << "amount:" << _amount << ';';
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ';';
		std::cout << "p_amount:" << p_amount << ';';
		std::cout << "withdrawal:" << "refused" << std::endl;
		return false;
	}
}

int	Account::checkAmount(void) const
{
	counter++;
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "index:" << _accountIndex << ';';
       	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << "\n";
}

void	Account::_displayTimestamp(void)
{
	unsigned	ms;
	unsigned	min;

	min = std::chrono::duration_cast<std::chrono::minutes>(std::chrono::system_clock::now().time_since_epoch()).count();
	ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	std::cout << '[';
	std::cout << min;
	std::cout << '_';
	std::cout << '0';
	std::cout << ms - min * 60 * 1000;
	std::cout << "] ";
}
