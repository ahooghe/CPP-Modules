/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:12:30 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 20:14:22 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump(std::string name);

int main(void)
{
    Zombie *z = newZombie("ahooghe");
    z->announce();
    randomChump("evaluator");
    delete z;
    return (0);
}