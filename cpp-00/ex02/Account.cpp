/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:57:31 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 15:56:39 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void )
{
    time_t now = time(0);
    struct tm timeinfo;
    localtime_r(&now, &timeinfo);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", &timeinfo);
    std::cout << buffer;
}

Account::~Account( void )
{
    _nbAccounts--;
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

Account::Account(int initial_deposit)
{
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl; 
}

int Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
                << ";deposits:" << _totalNbDeposits << ";withdrawals:" 
                << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit)
{
    int pamount;
    pamount = _amount;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << pamount
                << ";deposit:" << deposit << ";amount:" << _amount 
                << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
                << ";p_amount:" << _amount << ";withdrawal:" << std::flush;
    if (checkAmount() < withdrawal)
    {
       std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << std::flush;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount( void ) const
{
    return (_amount);
}

void Account::displayStatus( void ) const
{
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
                << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
