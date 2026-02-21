/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:18:24 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/21 14:38:28 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

using namespace  std;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) 
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void) 
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) 
{
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount()  << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	cout << "index:" << this->_accountIndex  << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	_nbAccounts  -= 1;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

Account::Account(void)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = 0;
	cout << "index:" << this->_accountIndex  << ";amount:" << this->_amount << ";created" << std::endl; 
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout  << "index:" << this->_accountIndex << ";p_amount:"  <<  this->_amount;
	this->_amount +=  deposit;
	this->_nbDeposits +=  1;
	_totalAmount  += deposit;
	_totalNbDeposits  += 1;
	cout  <<  ";deposit:" << deposit <<  ";amount:" << this->_amount  << ";nb_deposits:"  << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{

	_displayTimestamp();
    cout  << "index:" << this->_accountIndex << ";p_amount:"  <<  this->_amount;
	if (this->_amount >= withdrawal)
	{

		this->_amount -=  withdrawal;
		this->_nbWithdrawals +=  1;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals  += 1;
		cout  <<  ";withdrawal:" << withdrawal <<  ";amount:" << this->_amount  << ";nb_withdrawals:"  << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		cout  << ";withdrawal:refused"  << std::endl;
		return  (false);
	}
}

int Account::checkAmount(void)  const
{
    return (this->_amount);
}

void Account::displayStatus( void ) const 
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) 
{
	std::time_t	time = std::time(NULL);
	std::tm		*now =  std::localtime(&time);
	char		buffer[20];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", now);
	cout << buffer << " ";
}
