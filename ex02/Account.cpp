/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:18:24 by ldesboui          #+#    #+#             */
/*   Updated: 2026/02/21 11:06:55 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
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
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount()  << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << ";";
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	_totalNbDeposits += 1;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
}

Account::~Account(void)
{
}

Account::Account( void )
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = 0;
}

void Account::makeDeposit( int deposit ) {
}

bool Account::makeWithdrawal( int withdrawal ) {
    return false;
}

int Account::checkAmount( void ) const {
    return 0;
}

void Account::displayStatus( void ) const {
}

void Account::_displayTimestamp( void ) {
}
