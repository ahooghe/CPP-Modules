/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:21:34 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/19 17:31:42 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(Fixed x)
{
    if (x < 0)
        return (x * -1);
    return (x);
}

static Fixed area(const Point a, const Point b, const Point c)
{
    return (((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()))) / 2);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    Fixed abc = abs(area(a,b,c));
    Fixed pab = abs(area(point,a,b));
    Fixed pbc = abs(area(point,b,c));
    Fixed pca = abs(area(point,c,a));
    Fixed temp = pab + pbc;
    temp = temp + pca;
    return (abc == temp);
}