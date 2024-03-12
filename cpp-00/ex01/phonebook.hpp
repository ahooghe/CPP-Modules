/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:55:23 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/22 21:08:37 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// phonebook.hpp

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <csignal>
#include <cstdlib>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string secret;

public:
    // Constructor
    Contact();
    Contact(const std::string &first, const std::string &last, const std::string &nick, const std::string &phone, const std::string secret);

    // Getter methods
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getSecret() const;
};

class PhoneBook {
private:
    // You can store up to 8 _contacts in the phonebook
    Contact _contacts[8];
    int _numContacts;

public:
    // Constructor
    PhoneBook();

    // Add a contact to the phonebook
    void addContact();

    // Search for a contact by name
    void searchContact();
};

#endif
