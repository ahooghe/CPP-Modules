/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:45:32 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/19 17:36:36 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    if (bsp(Point(0,0), Point(10,30), Point(20,0), Point(30,15)) == true)
        std::cout << "Inside the triangle." << std::endl;
    else
        std::cout << "Not inside the triangle." << std::endl;

    if (bsp(Point(0,0), Point(10,30), Point(20,0), Point(10,15)) == true)
        std::cout << "Inside the triangle." << std::endl;
    else
        std::cout << "Not inside the triangle." << std::endl;
    return (0);
}