/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:58:41 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/19 17:35:05 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <string>
#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;
public:
    Point();
    Point(const float x, const float y);
    Point(const Point &copy);

    ~Point();

    Point &operator=(const Point &val);

    const Fixed &getX(void) const;
    const Fixed &getY(void) const;
};

std::ostream &operator<<(std::ostream &out, Point const point);
bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif
