/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:24:00 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/20 23:26:07 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->_hitPoints = 100;
    this->_initialHitPoints = this->_hitPoints;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_guardingGate = false;
    std::cout << "\033[0;32mA ScavTrap was created." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
    this->_guardingGate = copy._guardingGate;
    std::cout << "\033[0;32mCopied a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_initialHitPoints = this->_hitPoints;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_guardingGate = false;
    std::cout << "\033[0;32mA ScavTrap named " << this->_name << " was created." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[0;31mA ScavTrap named " << this->_name << " was destroyed." << std::endl;
}

//Member Functions
void ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints != 0)
    {
        if (this->_energyPoints == 0)
        {
            std::cout << "\033[0;33mThe ScavTrap named " << this->_name << " does not have any available energy to attack." << std::endl;
        }
        else
        {
            this->_energyPoints--;
            std::cout << "\033[0;32mThe ScavTrap named " << this->_name << " has attacked " << target << " succesfully." << std::endl;
        }
    }
    else
        std::cout << "\033[0;31mThe ScavTrap named " << this->_name << " does not have any hitpoints and is currently incapacitated. It cannot attack." << std::endl;
}

void ScavTrap::guardGate(void)
{
    if (this->_hitPoints != 0)
    {
        if (this->_guardingGate == false)
        {
            this->_guardingGate = true;
            std::cout << "\033[0;32mThe ScavTrap named " << this->_name << " is now guarding a gate." << std::endl;
        }
        else
            std::cout << "\033[0;33mThe ScavTrap named " << this->_name << " is already guarding a gate." << std::endl;
    }
    else
        std::cout << "\033[0;31mThe ScavTrap named " << this->_name << " cannot guard a gate because it is incapacitated." << std::endl;
}

//Getters
bool ScavTrap::getGuardingGate()
{
    return (this->_guardingGate);
}
    
//Setters
void ScavTrap::setGuardingGate(bool newGuardStatus)
{
    this->_guardingGate = newGuardStatus;
}

//Overloaded Operator
ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    this->_name = src._name;
    this->_attackDamage = src._attackDamage;
    this->_energyPoints = src._energyPoints;
    this->_guardingGate = src._guardingGate;
    this->_hitPoints = src._hitPoints;
    return (*this);
}