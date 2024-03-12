/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:06:28 by ahooghe           #+#    #+#             */
/*   Updated: 2023/12/10 14:00:34 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Created a brain" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Copied a brain" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
}

Brain::~Brain()
{
    std::cout << "Destroyed a brain" << std::endl;
}