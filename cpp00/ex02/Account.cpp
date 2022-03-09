#include <iostream>
#include <iomanip>
#include "Account.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;

	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount <<
	";created" << 
	std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount <<
	";closed" << 
	std::endl;
}

Account::Account(void)
{
	std::cout << "HELLO!" << std::endl;
}

int		Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << 
	"accounts:" << Account::getNbAccounts() <<
	";total:" << Account::getTotalAmount() <<
	";deposits:" << Account::getNbDeposits() <<
	";withdrawals:" << Account::getNbWithdrawals() <<
	std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();

	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	Account::_totalAmount += deposit;

	std::cout << "index:" << this->_accountIndex <<
	";p_amount:" << this->_amount <<
	";deposits:" << deposit;

	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount <<
	";nb_deposits:" << this->_nbDeposits <<
	std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex <<
	";p_amount:" << this->_amount;
	if (withdrawal > Account::checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		this->_nbWithdrawals++;

		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		std::cout << ";amount:" << this->_amount <<
		";nb_withdrawals:" << this->_nbWithdrawals <<
		std::endl;
	}
	return (true);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<
	";amount:" << this->_amount <<
	";deposits:" << this->_nbDeposits <<
	";withdrawals:" << this->_nbWithdrawals <<
	std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(NULL);
  	std::tm *const pTInfo = std::localtime(&t);
  	
	std::cout << std::setfill('0') << "[" << 
	std::setw(4) << 1900 + pTInfo->tm_year <<
	std::setw(2) << pTInfo->tm_mon + 1 <<
	std::setw(2) << pTInfo->tm_mday << "_" <<
	std::setw(2) << pTInfo->tm_hour <<
	std::setw(2) << pTInfo->tm_min <<
	std::setw(2) << pTInfo->tm_sec << "] ";
}
