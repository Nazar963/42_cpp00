/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:34:29 by naal-jen          #+#    #+#             */
/*   Updated: 2023/06/02 09:44:20 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;

    _amount += deposit;
    _nbDeposits++;

    _totalAmount += deposit;
    _totalNbDeposits++;

    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << '\n';
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";

    if (_amount < withdrawal)
    {
        std::cout << "refused\n";
        return false;
    }
    else
    {
        std::cout << withdrawal;

        _amount -= withdrawal;
        _nbWithdrawals++;

        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;

        std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << '\n';
        return true;
    }
}

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << '\n';
}

void Account::_displayTimestamp(void)
{
    std::time_t result = std::time(NULL);
    std::tm* now = std::localtime(&result);
    std::cout << '[' << (now->tm_year + 1900) << std::setw(2) << std::setfill('0') << (now->tm_mon + 1) << std::setw(2) << std::setfill('0') << now->tm_mday << '_';
    std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}