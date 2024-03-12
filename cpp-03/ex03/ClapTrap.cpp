/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:18:46 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/20 23:25:35 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap(): _name("nameless"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    this->_initialHitPoints = this->_hitPoints;
    std::cout << "\033[0;32mA new ClapTrap called " << this->_name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    this->_initialHitPoints = this->_hitPoints;
    std::cout << "\033[0;32mA new ClapTrap called " << this->_name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "\033[0;32mThe ClapTrap called" << copy._name << " has been copied." << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    this->_name = src._name;
    this->_attackDamage = src._attackDamage;
    this->_energyPoints = src._energyPoints;
    this->_hitPoints = src._hitPoints;
    return (*this);
}
//Destructor
ClapTrap::~ClapTrap()
{
    std::cout << "\033[0;31mThe ClapTrap called " << this->_name << " was destroyed." << std::endl;
}

//Member Functions
void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "\033[0;31mThe ClapTrap named " << this->_name << " is currently incapacitated since it is out of hitpoints. It cannot attack anymore." << std::endl;
    }
    else
    {
        if (this->_energyPoints == 0)
        {
            std::cout << "\033[0;33mClapTrap " << this->_name << " is out of energy." << std::endl;
        }
        else
        {
            std::cout << "\033[0;32mClapTrap " << this->_name << " attacks " << target << " causing " << this->_hitPoints << " of damage!" << std::endl;
            this->_energyPoints -= 1;
        }
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "\033[0;31mThe ClapTrap named " << this->_name << " is currently incapacitated since it is out of hitpoints. It cannot take more damage." << std::endl;
    }
    else
    {
        std::cout << "\033[0;32mThe ClapTrap named " << this->_name << " took " << amount << " damage, resulting in " <<std::flush;
        if (amount > this->_hitPoints)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= amount;
        std::cout << this->_hitPoints << " left over hitpoints." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "\033[0;31mThe ClapTrap named " << this->_name << " is currently incapacitated since it is out of hitpoints. It cannot take more damage." << std::endl;
    }
    else
    {
        if (amount + this->_hitPoints <= this->_initialHitPoints)
        {
            if (this->_energyPoints == 0)
            {
                std::cout << "\033[0;33mClapTrap " << this->_name << " is out of energy." << std::endl;
            }
            else
            {
                std::cout << "\033[0;32mClapTrap " << this->_name << " has been healed for " << amount << " and now has " << (this->_hitPoints + amount) << " hitpoints remaining." << std::endl;
                this->_hitPoints += amount;
                this->_energyPoints -= 1;
            }
        }
        else
            std::cout << "\033[0;31mThe ClapTrap cannot have more healthpoints than " << this->_initialHitPoints << ". It currently has " << this->_hitPoints << " available. Please try again with a fitting amount." << std::endl;
    }
}
//Getters
std::string ClapTrap::getName()
{
    return (this->_name);
}

int ClapTrap::getHitPoints()
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints()
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage()
{
    return (this->_attackDamage);
}

//Setters
void ClapTrap::setHitPoints(int newHitPoints)
{
    this->_hitPoints = newHitPoints;
}

void ClapTrap::setEnergyPoints(int newEnergyPoints)
{
    this->_energyPoints = newEnergyPoints;
}

void ClapTrap::setAttackDamage(int newAttackDamage)
{
    this->_attackDamage = newAttackDamage;
}