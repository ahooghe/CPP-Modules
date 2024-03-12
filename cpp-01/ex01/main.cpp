/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:12:30 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 20:28:36 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Creates a horde of N zombies with given name
Zombie *zombieHorde(int N, std::string name);

int main(void)
{
    int zombies = 5;
    Zombie *horde = zombieHorde(zombies, "ahooghe");
    for (int i = 0; i < zombies; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}