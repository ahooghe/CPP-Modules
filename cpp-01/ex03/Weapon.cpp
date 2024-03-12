/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:40:07 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 21:13:18 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
    std::cout << "The weapon " << this->_type << " has been created." << std::endl; 
}

Weapon::~Weapon()
{
    std::cout << "The weapon " << this->_type << " has been destroyed." << std::endl; 
}

std::string Weapon::getType() const
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}