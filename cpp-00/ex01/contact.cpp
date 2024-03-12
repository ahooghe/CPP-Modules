/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:33:47 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/22 21:08:11 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{

}

Contact::Contact(const std::string &first, const std::string &last, const std::string &nick, const std::string &phone, const std::string secret)
{
    this->firstName = first;
    this->lastName = last;
    this->nickName = nick;
    this->phoneNumber = phone;
    this->secret = secret;    
}

std::string Contact::getFirstName() const
{
    return this->firstName;
}

std::string Contact::getLastName() const
{
    return this->lastName;
}

std::string Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}

std::string Contact::getNickName() const
{
    return this->nickName;
}

std::string Contact::getSecret() const
{
    return this->secret;
}
