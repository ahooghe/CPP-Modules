/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:57:16 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/21 17:25:45 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
private:
    
public:
    FragTrap();
    FragTrap(const FragTrap &copy);
    FragTrap(std::string name);
    virtual ~FragTrap();

    void highFivesGuys(void);
    FragTrap &operator=(const FragTrap &src);
};

#endif
