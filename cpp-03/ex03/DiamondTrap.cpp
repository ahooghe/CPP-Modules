/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:32:36 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/04 13:33:27 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructors
DiamondTrap::DiamondTrap(): ClapTrap()
{
    this->_name = ClapTrap::_name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_energyPoints = ScavTrap::_energyPoints;
    std::cout << "\033[0;32mThe DiamondTrap named " << this->_name << " has been constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    *this = copy;
    std::cout << "\033[0;32mThe DiamondTrap named " << this->_name << " has been constructed." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_energyPoints = ScavTrap::_energyPoints;
    std::cout << "\033[0;32mThe DiamondTrap named " << this->_name << " has been constructed." << std::endl;
}
    
//Destructors
DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[0;31mThe DiamondTrap named " << this->_name << " has been destroyed." << std::endl;
}

//Overloaded Operators
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    this->_name = src._name;
    this->_attackDamage = src._attackDamage;
    this->_energyPoints = src._energyPoints;
    this->_guardingGate = src._guardingGate;
    this->_hitPoints = src._hitPoints;
    return (*this);
}

//Method Functions
void DiamondTrap::attack(const std::string &target)
{
    /*if (this->_hitPoints != 0)
    {
        if (this->_energyPoints == 0)
        {
            std::cout << "\033[0;33mThe DiamondTrap named " << this->_name << " does not have any available energy to attack." << std::endl;
        }
        else
        {
            this->_energyPoints--;
            std::cout << "\033[0;32mThe DiamondTrap named " << this->_name << " has attacked " << target << " succesfully." << std::endl;
        }
    }
    else
        std::cout << "\033[0;31mThe DiamondTrap named " << this->_name << " does not have any hitpoints and is currently incapacitated. It cannot attack." << std::endl;*/
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    if (this->_hitPoints > 0)
        std::cout << "\033[0;32mHello, I am a DiamondTrap named " 
                    << this->_name << " and I am built with parts of the ClapTrap named " 
                    << ClapTrap::_name << "." << std::endl;
    else
        std::cout << "\033[0;31mThe DiamondTrap named " << this->_name 
                    << " cannot tell you which ClapTrap he's built out of currently, because he's incapacitated. He does look like he has the parts of " 
                    << ClapTrap::_name << "." << std::endl;
}
