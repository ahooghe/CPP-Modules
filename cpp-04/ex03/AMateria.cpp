/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:43:31 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 14:57:49 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


// Constructors and Destructors
AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

AMateria::AMateria()
{

}

AMateria::AMateria(AMateria const &copy)
{
    this->_type = copy.getType();
}

AMateria::~AMateria()
{

}

AMateria *AMateria::clone() const
{
    return (NULL);
}

void AMateria::use(ICharacter &target)
{
    (void)(target);
}


// Getters and Setters
std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::setType(std::string type)
{
    this->_type = type;
}

// ICE
Ice::Ice() :AMateria("ice") 
{

}

Ice::Ice(const Ice &src): AMateria(src.getType()) 
{
    
}
		
AMateria *Ice::clone() const
{
    	return new Ice(*this);
}

void Ice::use(ICharacter &target) 
{
    	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// CURE
Cure::Cure() :AMateria("cure")
{

}

Cure::Cure(const Cure &src): AMateria(src.getType())
{
    
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}