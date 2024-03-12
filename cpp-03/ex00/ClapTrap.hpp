/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:18:48 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/04 13:25:45 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

    unsigned int _maxHitPoints = 10;
    
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    std::string getName();
    int getHitPoints();
    int getEnergyPoints();
    int getAttackDamage();
    
    void setHitPoints(int newHitPoints);
    void setEnergyPoints(int newEnergyPoints);
    void setAttackDamage(int newAttackDamage);

    ClapTrap &operator=(const ClapTrap &src);
};

#endif
