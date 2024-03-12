/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:18:50 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/21 17:22:45 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	{
		std::cout << std::endl << "\033[1;36mClapTrap Testing" << std::endl << std::endl;
		ClapTrap claptrap = ClapTrap("Clappy");
		ClapTrap flaptrap = ClapTrap("Flappy");

		claptrap.attack(flaptrap.getName());
		flaptrap.takeDamage(claptrap.getAttackDamage());
		flaptrap.beRepaired(1);
		flaptrap.attack(claptrap.getName());
		claptrap.takeDamage(flaptrap.getAttackDamage() * 6);
		flaptrap.beRepaired(10);
		claptrap.attack(flaptrap.getName());
	}
	{
		std::cout << std::endl << "\033[1;36mScavTrap Testing" << std::endl << std::endl;
		ScavTrap claptrap = ScavTrap("Clappy");
		ScavTrap flaptrap = ScavTrap("Flappy");

		claptrap.attack(flaptrap.getName());
		flaptrap.takeDamage(claptrap.getAttackDamage());
		flaptrap.beRepaired(1);
		flaptrap.attack(claptrap.getName());
		claptrap.takeDamage(flaptrap.getAttackDamage() * 6);
		flaptrap.beRepaired(10);
		claptrap.attack(flaptrap.getName());
		flaptrap.guardGate();
		claptrap.guardGate();
		flaptrap.guardGate();
	}
	{ 
		std::cout << std::endl << "\033[1;36mFragTrap Testing" << std::endl << std::endl;
		FragTrap claptrap = FragTrap("Clappy");
		FragTrap flaptrap = FragTrap("Flappy");

		claptrap.attack(flaptrap.getName());
		flaptrap.takeDamage(claptrap.getAttackDamage());
		flaptrap.beRepaired(1);
		flaptrap.attack(claptrap.getName());
		claptrap.takeDamage(flaptrap.getAttackDamage() * 6);
		flaptrap.beRepaired(10);
		claptrap.attack(flaptrap.getName());
		flaptrap.highFivesGuys();
		claptrap.highFivesGuys();
	}
	{
		std::cout << std::endl << "\033[1;36mDiamondTrap Testing" << std::endl << std::endl;
		DiamondTrap claptrap = DiamondTrap("Clappy");
		DiamondTrap flaptrap = DiamondTrap("Flappy");

		claptrap.attack(flaptrap.getName());
		flaptrap.takeDamage(claptrap.getAttackDamage());
		flaptrap.beRepaired(1);
		flaptrap.attack(claptrap.getName());
		claptrap.takeDamage(flaptrap.getAttackDamage() * 6);
		flaptrap.beRepaired(10);
		claptrap.attack(flaptrap.getName());
		flaptrap.highFivesGuys();
		claptrap.highFivesGuys();
		claptrap.whoAmI();
		flaptrap.whoAmI();
	}
	return (0);
}