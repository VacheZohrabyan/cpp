#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;    
    _nbDeposits++;
    _nbAccounts++;
    _totalAmount += initial_deposit;

}

Account::~Account()
{

}

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::makeDeposit(int deposit)
{
    if (deposit <= 0)
        return ;
    _nbDeposits += deposit;
    _totalNbDeposits++;
    _totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal <= 0)
        return false;
    if (_nbDeposits < withdrawal)
        return false;
    if (_nbDeposits >= withdrawal)
    {
        _nbDeposits -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= _amount;
        return true;
    }
    return false;
}

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals();
    std::cout << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t current_time = std::time(NULL);
    std::tm * tm = std::localtime(&current_time);

    std::cout << "[" ;
    std::cout << tm->tm_year;
    std::cout << tm->tm_mon;
    std::cout << tm->tm_mday;
    std::cout << "_";
    std::cout << tm->tm_hour;
    std::cout << tm->tm_min;
    std::cout << tm->tm_sec;
    std::cout << "]";
}