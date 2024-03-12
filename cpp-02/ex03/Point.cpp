/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:02:43 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/19 17:21:12 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
    
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
    
}

Point::Point(const Point &copy): _x(copy.getX()), _y(copy.getY())
{
    
}

Point::~Point()
{
    
}

Point &Point::operator=(const Point &src)
{
    if (this->getX() != src.getX())
        (Fixed)this->_x = src.getX();
    if (this->getY() != src.getY())
        (Fixed)this->_y = src.getY();
    return (*this);
}

const Fixed &Point::getX(void) const
{
    return (this->_x);
}

const Fixed &Point::getY(void) const
{
    return (this->_y);
}

std::ostream &operator<<(std::ostream &out, Point const point)
{
    out << "_x: " << point.getX() << " / _y: " << point.getY() << std::endl;
    return (out);
}