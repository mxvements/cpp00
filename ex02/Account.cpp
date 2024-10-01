/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:41:54 by luciama2          #+#    #+#             */
/*   Updated: 2024/10/01 21:39:13 by luciama2         ###   ########.fr       */
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
	char buffer[15];
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
	std::stringstream idx_ss;
	std::stringstream amount_ss;

	this->_amount = initial_deposit;
	idx_ss << this->_accountIndex;
	amount_ss << this->_amount;

	std::cout << "[" << ts << "]";
	std::cout << "index:" << idx_ss.str() << ";";
	std::cout << "amount:" << amount_ss.str() << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	std::string ts = get_timestamp();
	std::stringstream idx_ss;
	std::stringstream totalAmount_ss;

	idx_ss << this->_accountIndex;
	totalAmount_ss << this->_amount;

	std::cout << "[" << ts << "]";
	std::cout << "index:" << idx_ss.str() << ";";
	std::cout << "amount:" << totalAmount_ss.str() << ";";
	std::cout << "closed" << std::endl;
}

// static functs

int Account::getNbAccounts(void) { return 0; }

int Account::getTotalAmount(void) { return 0; }

int Account::getNbDeposits(void) { return 0; }

int Account::getNbWithdrawals(void) { return 0; }

void Account::displayAccountsInfos(void)
{
	// std::string ts = get_timestamp();
	// std::stringstream nbAccount;
	// std::stringstream total;
	// std::stringstream totalDeposits;
	// std::stringstream totalWithdrawals;

	// nbAccount << Account::_nbAccounts;
	// total << Account::_totalAmount;
	// totalDeposits << Account::_totalNbDeposits;
	// totalWithdrawals << Account::_totalNbWithdrawals;

	// std::cout << "[" << ts << "]";
	// std::cout << "total:" << nbAccount.str() << ";";
	// std::cout << "deposits:" << nbAccount.str() << ";";
	// std::cout << "withdrawals:" << nbAccount.str() << ";";
}

// non-static functions

void Account::makeDeposit(int deposit)
{
	(void)deposit;
	return;
}

bool Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return 0;
}

int Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{
	return;
}