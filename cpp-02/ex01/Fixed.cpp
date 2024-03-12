/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:36:00 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 23:04:00 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
    std::cout << "Default contructor called." << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = other;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called." << std::endl;
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called." << std::endl;
    this->_value = roundf(value * (1 << this->_fractionalBits)); 
}

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called." << std::endl;
    if (this != &other)
    {
        this->_value = other.getRawBits();
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &other)
{
    out << other.toFloat();
    return (out);
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_value >> this->_fractionalBits);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called." << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}
