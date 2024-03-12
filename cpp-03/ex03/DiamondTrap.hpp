/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:32:34 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/21 17:13:11 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
    std::string _name;
    
public:
//Constructors
    DiamondTrap();
    DiamondTrap(const DiamondTrap &copy);
    DiamondTrap(std::string name);
    
//Destructors
    ~DiamondTrap();

//Overloaded Operators
    DiamondTrap &operator=(const DiamondTrap &src);

//Method Functions
    void attack(const std::string &target);
    void whoAmI();
};

#endif