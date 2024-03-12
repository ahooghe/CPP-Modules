/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:41:39 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 13:26:41 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "Animal constructor called" << std::endl;

}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	
}


std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	this->_type = src._type;
	return (*this);
}