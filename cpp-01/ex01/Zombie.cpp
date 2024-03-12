/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:04:33 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 20:25:01 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "nameless";
    std::cout << "Zombie " << _name << " has been created." << std::endl;
}
Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "Zombie " << _name << " has been created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " has been destroyed." << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}