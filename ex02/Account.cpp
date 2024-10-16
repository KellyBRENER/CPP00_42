/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:40:15 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/16 16:40:54 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <cstdio>
#include <limits>
#include <ctime>

int	Account::_nbAccounts = 0; // Initialisation à 0
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void) {
	std::time_t	now = std::time(0);
	std::cout<<"["<<now<<"] ";
}

Account::Account(int initial_deposit) {
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount\
	<<";created"<<std::endl;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount\
	<<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout<<"accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"\
	<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<\
	";deposit:"<<deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout<<";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits\
	<<std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<\
	";withdrawal:";
	bool	wd_allowed;
	if (withdrawal <= this->_amount)
		wd_allowed = true;
	else {
		wd_allowed = false;
		std::cout<<"refused"<<std::endl;
		return (wd_allowed);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout<<withdrawal<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals\
	<<std::endl;
	return (wd_allowed);
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount\
	<<";closed"<<std::endl;
}
