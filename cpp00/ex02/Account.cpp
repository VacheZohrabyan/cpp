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
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
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
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";deposits:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
    _totalAmount += deposit;
    _amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal <= 0)
        return false;
    if (_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";withdrawal:refused" << std::endl;
    }
    if (_amount > withdrawal)
    {
        _displayTimestamp();
        _nbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";withdrawal:" << withdrawal
              << ";amount:" << (_amount)
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;
        _totalNbWithdrawals++;
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
    char temp[20];
    std::strftime(temp, sizeof(temp), "%Y%m%d_%H%M%S", std::localtime(&current_time));

    std::cout << "[" << temp << "]";
}