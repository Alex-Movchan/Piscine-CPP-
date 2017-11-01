
#include "Account.class.hpp"
#include <iostream>

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits( 0 ), _nbWithdrawals( 0 ) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account() {

	return;
}

Account::~Account( void ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return;
}

void Account::_displayTimestamp() {

	time_t t;
	char buf[20];

	t = time(&t);
	strftime(buf, 20, "[%Y%m%d_%H%M%S] ", gmtime(&t));
	std::cout << buf;
	return;
}

int	Account::getNbDeposits( void ) {

	return (_totalNbDeposits);
}

int	Account::getTotalAmount( void ) {

	return (_totalAmount);
}

int	Account::getNbAccounts( void ) {

	return (_nbAccounts);
}

int	Account::getNbWithdrawals( void ) {

	return (_totalNbWithdrawals);
}
int		Account::checkAmount( void ) const {

	return (this->_amount);
}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:"
			  << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return;
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << Account::checkAmount() << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}

void	Account::makeDeposit( int deposit ) {

	Account::_displayTimestamp();
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount() << ";deposit:" << deposit
			  << ";amount:" << Account::checkAmount() + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	return;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	Account::_displayTimestamp();
	if (withdrawal <= this->_amount) {
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount() << ";withdrawal:" << withdrawal
				  << ";amount:" << Account::checkAmount() - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		return (true);
	} else {
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount() << ";withdrawal:refused"
				  << std::endl;
		return (false);
	}
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;