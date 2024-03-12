/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:50:32 by ahooghe           #+#    #+#             */
/*   Updated: 2023/11/07 20:09:16 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _currentWeapon(weapon)
{
    std::cout << "The HumanA called " << this->_name << " with weapon " << this->_currentWeapon.getType() << " has been created." << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "The HumanA called " << this->_name << " with weapon " << this->_currentWeapon.getType() << " has been destroyed." << std::endl;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_currentWeapon.getType() << "." << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->_currentWeapon = weapon;
}