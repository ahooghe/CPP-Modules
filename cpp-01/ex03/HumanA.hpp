/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:39:07 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 21:07:49 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
    void setWeapon(Weapon weapon);
    
    private:
    std::string _name;
    Weapon &_currentWeapon;
};

#endif