/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:32:19 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 22:59:21 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//New rules:
//Default constructor, Copy constructor, Copy assignment operator, Destructor

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
private:
    int _value;
    static const int _fractionalBits = 8;
    
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed(const int value);
    Fixed(const float value);
    Fixed& operator=(const Fixed &other);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream& out, Fixed const &there);
#endif