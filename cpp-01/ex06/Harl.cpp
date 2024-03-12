/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:10:10 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 22:27:09 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}
static int getLevel(std::string level)
{
    if (level == "DEBUG")
        return (0);
    if (level == "INFO")
        return (1);
    if (level == "WARNING")
        return (2);
    if (level == "ERROR")
        return (3);
    return (4);
}
void Harl::complain(std::string level)
{
    void (Harl::*debug)() = &Harl::_debug;
    void (Harl::*info)() = &Harl::_info;
    void (Harl::*warning)() = &Harl::_warning;
    void (Harl::*error)() = &Harl::_error;

    void (Harl::*complain[4])() = { debug, info, warning, error};
    
    switch(getLevel(level))
    {
        case 0:
            (this->*complain[0])();
            break;
        case 1:
            (this->*complain[1])();
            break;
        case 2:
            (this->*complain[2])();
            break;
        case 3:
            (this->*complain[3])();
            break;
        default:
        std::cout << "Probably complaining about an insignificant problem." << std::endl;
        break;
    }
}

void Harl::_debug(void)
{
    std::cout << "DEBUG: Detected a debug error." << std::endl;
}


void Harl::_info(void)
{
    std::cout << "INFO: Detected an info error." << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "WARNING: Detected a warning error." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "ERROR: Detected a error error." << std::endl;
}
