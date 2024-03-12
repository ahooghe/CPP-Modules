/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:32:19 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/19 17:35:01 by ahooghe          ###   ########.fr       */
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
    //Constructors
    Fixed();
    Fixed(const Fixed &other);
    Fixed(const int value);
    Fixed(const float value);
    
    //Destructors
    ~Fixed();

    //Overloaded Operators
    Fixed& operator=(const Fixed &other);
    
    //Overloaded Comparison Operators
    bool operator<(const Fixed &other) const;
    bool operator>(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    //Overloaded Arithmatic Operators
    float operator+(const Fixed &other) const;
    float operator-(const Fixed &other) const;
    float operator*(const Fixed &other) const;
    float operator/(const Fixed &other) const;

    //Overloaded Pre-increment Operators
    Fixed operator++();
    Fixed operator--();

    //Overloaded Post-increment Operators
    Fixed operator++(int);
    Fixed operator--(int);

    //Getter
    int getRawBits() const;

    //Setter
    void setRawBits(int const raw);

    //itof and ftoi
    float toFloat(void) const;
    int toInt(void) const;

    //min and max
    static Fixed &min(Fixed &first, Fixed &second);
    static const Fixed &min(Fixed const &first, Fixed const &second);
    static Fixed &max(Fixed &first, Fixed &second);
    static const Fixed &max(Fixed const &first, Fixed const &second);
};

std::ostream &operator<<(std::ostream& out, Fixed const &there);
#endif