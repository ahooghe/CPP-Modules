/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:36:00 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/19 17:38:59 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed(): _value(0)
{
	//std::cout << "Default contructor called." << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called." << std::endl;
	*this = other;
}

Fixed::Fixed(const int value)
{
	//std::cout << "Int constructor called." << std::endl;
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float constructor called." << std::endl;
	this->_value = roundf(value * (1 << this->_fractionalBits)); 
}

// Destructors
Fixed::~Fixed()
{
	//std::cout << "Destructor called." << std::endl;
}

// Overloaded Operators
Fixed& Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

//Overloaded Comparison Operators
bool Fixed::operator<(const Fixed &other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->toFloat() != other.toFloat());
}

//Overloaded Arithmatic Operators
float Fixed::operator+(const Fixed &other) const
{
	return (this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed &other) const
{
	return (this->toFloat() - other.toFloat());
}

float Fixed::operator*(const Fixed &other) const
{
	return (this->toFloat() * other.toFloat());
}

float Fixed::operator/(const Fixed &other) const
{
	return (this->toFloat() / other.toFloat());
}

//Overloaded Pre-increment Operators
Fixed Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->_value--;
	return (*this);
}

//Overloaded Post-increment Operators
Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_value;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_value;
	return (tmp);
}

//Overload for ostream
std::ostream &operator<<(std::ostream &out, Fixed const &other)
{
	out << other.toFloat();
	return (out);
}


//itof
float Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractionalBits));
}

//ftoi
int Fixed::toInt(void) const
{
	return (this->_value >> this->_fractionalBits);
}

//Getter
int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called." << std::endl;
	return (this->_value);
}

//Setter
void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

//Minimum
Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
}

//Maximum
Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
        return (first);
    return (second);
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first.toFloat() >= second.toFloat())
        return (first);
    return (second);
}
