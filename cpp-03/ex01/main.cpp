/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:18:50 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/20 23:24:33 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap claptrap = ScavTrap("Clappy");
    ScavTrap flaptrap = ScavTrap("Flappy");

    claptrap.attack(flaptrap.getName());
    flaptrap.takeDamage(claptrap.getAttackDamage());
    flaptrap.beRepaired(1);
    flaptrap.attack(claptrap.getName());
    for (int i = 0; i < 50; i++)
        flaptrap.attack(claptrap.getName());
    claptrap.takeDamage(flaptrap.getAttackDamage() * 6);
    flaptrap.beRepaired(10);
    claptrap.attack(flaptrap.getName());
    flaptrap.guardGate();
    claptrap.guardGate();
    flaptrap.guardGate();
    return (0);
}