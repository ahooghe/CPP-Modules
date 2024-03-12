/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:53:50 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 13:26:23 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat(): WrongAnimal()
{
    setType("Cat");
    std::cout << "Cat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow." << std::endl;
}