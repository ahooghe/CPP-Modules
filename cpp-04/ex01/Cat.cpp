/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:53:50 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 15:11:12 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    setType("Cat");
    this->_brain = new Brain();
    std::cout << "Created a Cat." << std::endl;
}

Cat::Cat(Cat const &src): Animal()
{
    setType("Cat");
    this->_brain = new Brain(*src._brain);
    std::cout << "Copied a Cat." << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Destroyed a Cat." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow." << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        std::cout << "Assigned a Cat." << std::endl;
	    delete this->_brain;
	    this->_brain = new Brain(*src._brain);
	    this->setType(src.getType());
    }
    return (*this);
}