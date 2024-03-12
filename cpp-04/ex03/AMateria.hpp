/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:25:29 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 14:54:02 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter; 

class AMateria
{
	protected:
		//
		
	public:
	// Constructors and Destructors
		AMateria(std::string const &type);
		AMateria();
		AMateria(AMateria const &copy);
		virtual ~AMateria();

	// Getters and Setters
		std::string const &getType() const;
		void setType(std::string type);

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
		
	private:
		std::string _type; 
};

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &src);
		
		AMateria *clone() const;
		
		void use(ICharacter &target);
};

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &src);
		
		AMateria *clone() const;
		
		void use(ICharacter &target);
};

#endif