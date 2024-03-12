/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:55:29 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 14:44:16 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(): Animal()
{
	setType("Dog");
	this->_brain = new Brain();
	std::cout << "Created a Dog." << std::endl;
}

Dog::Dog(Dog const &src): Animal()
{
	setType("Dog");
	this->_brain = new Brain(*src._brain);
	std::cout << "Copied a Dog." << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destroyed a Dog." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof." << std::endl;
}