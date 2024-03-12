/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:52:42 by ahooghe           #+#    #+#             */
/*   Updated: 2023/11/07 20:09:04 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _currentWeapon(NULL)
{
    std::cout << "The HumanB called " << this->_name << " has been created." << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "The HumanB called " << this->_name << " with weapon " << this->_currentWeapon->getType() << " has been destroyed." << std::endl;
}

void HumanB::attack()
{
    if (this->_currentWeapon != NULL)
        std::cout << this->_name << " attacks with their " << this->_currentWeapon->getType() << "." << std::endl;
    else
        std::cout << this->_name << " attacks with their fists, because " << this->_name << " has no weapon." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_currentWeapon = &weapon;    
}
