/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:18:50 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/20 22:15:00 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap = ClapTrap("Clappy");
    ClapTrap flaptrap = ClapTrap("Flappy");

    claptrap.attack(flaptrap.getName());
    flaptrap.takeDamage(claptrap.getAttackDamage());
    flaptrap.beRepaired(1);
    flaptrap.attack(claptrap.getName());
    claptrap.takeDamage(flaptrap.getAttackDamage() * 6);
    flaptrap.beRepaired(10);
    claptrap.attack(flaptrap.getName());
    return (0);
}