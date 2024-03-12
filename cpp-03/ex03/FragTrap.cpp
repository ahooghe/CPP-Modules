/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:58:34 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/21 17:19:19 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->_hitPoints = 100;
    this->_initialHitPoints = this->_hitPoints;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "\033[0;32mA FragTrap has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
    std::cout << "\033[0;32mThe FragTrap named " << this->_name << " has been created." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_initialHitPoints = this->_hitPoints;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "\033[0;32mThe FragTrap named " << this->_name << " has been created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "\033[0;31mA FragTrap named " << this->_name << " was destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->_hitPoints > 0)
        std::cout << "\033[0;32m" << this->_name << ":Hey guys, anyone want a high five?" << std::endl;
    else
        std::cout << "\033[0;31m" << this->_name << " is unable to high five anyone because it's incapacitated." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    this->_name = src._name;
    this->_attackDamage = src._attackDamage;
    this->_energyPoints = src._energyPoints;
    this->_hitPoints = src._hitPoints;
    return (*this);
}
