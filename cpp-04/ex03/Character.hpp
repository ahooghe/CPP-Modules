/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:57:13 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 14:54:58 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"



class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];

	public:
		Character(const std::string name);
		Character(const Character &src);
		~Character();
		
		Character &operator=(const Character &src);

		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		
};

#endif
