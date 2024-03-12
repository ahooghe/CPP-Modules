/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:15:55 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/21 17:03:33 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
    bool _guardingGate;
public:
    //Constructors
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);
    
    //Destructor
    virtual ~ScavTrap();

    //Method Functions
    void attack(const std::string &target);
    void guardGate(void);

    //Getters
    bool getGuardingGate();
    
    //Setters
    void setGuardingGate(bool newGuardStatus);

    //Overloaded Operator
    ScavTrap &operator=(const ScavTrap &src);
};



#endif
