/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:55:29 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 13:27:36 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"


WrongDog::WrongDog(): WrongAnimal()
{
    setType("Dog");
    std::cout << "Dog constructor called" << std::endl;
}

WrongDog::~WrongDog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << "Woof." << std::endl;
}