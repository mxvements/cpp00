/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:41:54 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/04 21:38:51 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

static std::string get_timestamp(void)
{
	time_t currentTime = time(NULL);
	tm *localTime = localtime(&currentTime);
	char buffer[20];
	std::stringstream ss;

	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
	ss << buffer;

	return ss.str();
}

/**
 *	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

 */
Account::Account(int initial_deposit)
{
	std::string ts = get_timestamp();

	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;

	std::cout << "[" << ts << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;

	_totalAmount += initial_deposit;
	_nbAccounts++;
}

Account::~Account(void)
{
	std::string ts = get_timestamp();

	std::cout << "[" << ts << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

// static functs
int Account::_nbAccounts = 0;
int Account::getNbAccounts(void) { return Account::_nbAccounts; }

int Account::_totalAmount = 0;
int Account::getTotalAmount(void) { return Account::_totalAmount; }

int Account::_totalNbDeposits = 0;
int Account::getNbDeposits(void) { return Account::_totalNbDeposits; }

int Account::_totalNbWithdrawals = 0;
int Account::getNbWithdrawals(void) { return Account::_totalNbWithdrawals; }

void Account::displayAccountsInfos(void)
{
	std::string ts = get_timestamp();
	
	std::cout << "[" << ts << "] ";
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
	return ;
}

// non-static functions

void Account::makeDeposit(int deposit)
{
	std::string ts = get_timestamp();
	

	std::cout << "[" << ts << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	return ;
}

bool Account::makeWithdrawal(int withdrawal)
{
	std::string ts = get_timestamp();
	
	if (withdrawal <= this->_amount)
	{
		std::cout << "[" << ts << "] ";
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return 1;
	}
	std::cout << "[" << ts << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:refused"<< std::endl;
	return 0;
}

int Account::checkAmount(void) const { return this->_amount; }

//[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
void Account::displayStatus(void) const
{
	std::string ts = get_timestamp();

	std::cout << "[" << ts << "] ";
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}