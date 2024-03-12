/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:41:39 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 14:43:34 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "Animal constructed." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructed." << std::endl;
}

void Animal::makeSound() const
{
    
}


std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::setType(std::string type)
{
    this->_type = type;
}

Animal &Animal::operator=(const Animal &src)
{
    this->_type = src._type;
    return (*this);
}
