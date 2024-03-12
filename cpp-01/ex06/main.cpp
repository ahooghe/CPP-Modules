/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:05:27 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 22:27:20 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Correct usage: " << argv[0] << " [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain(argv[1]);

    return (0);
}