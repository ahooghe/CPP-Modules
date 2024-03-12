/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:10:10 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 22:17:06 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void Harl::complain(std::string level)
{
    void (Harl::*debug)() = &Harl::_debug;
    void (Harl::*info)() = &Harl::_info;
    void (Harl::*warning)() = &Harl::_warning;
    void (Harl::*error)() = &Harl::_error;

    void (Harl::*complain[4])() = { debug, info, warning, error};
    std::string levels[4] =  {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            (this->*complain[i])();
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
