/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:36:25 by ahooghe           #+#    #+#             */
/*   Updated: 2023/11/05 17:35:40 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->_numContacts = 0;
}

void PhoneBook::addContact( void )
{
	std::string info[5] = {"Enter the first name of the contact. Write 'EXIT' to return to the main menu.\n", 
							"Enter the last name of the contact. Write 'EXIT' to return to the main menu.\n", 
							"Enter the nickname of the contact. Write 'EXIT' to return to the main menu.\n", 
							"Enter the phone number of the contact. Write 'EXIT' to return to the main menu.\n", 
							"Enter the deepest darkest secret of the contact. Write 'EXIT' to return to the main menu.\n"};
	std::string traits[5];
	int i = 0;
	while (i < 5)
	{
		std::cout << info[i] << std::endl;
		if (!(std::getline(std::cin, traits[i]))) {
			std::cout << "EOF (Ctrl+D) detected. Exiting." << std::endl;
			exit (1);
		}
		if (traits[i] == "EXIT")
			return ;
		if (traits[i].length() != 0)
			i++;
	}
	this->_contacts[this->_numContacts % 8] = Contact(traits[0], traits[1], traits[2], traits[3], traits[4]);
	this->_numContacts++;
	if (this->_numContacts == 16)
		this->_numContacts = 8;
}

void printer(std::string temp, int dopipe) 
{
	if (temp.length() > 10)	{
		temp  = temp.substr(0, 9);
		temp = temp.append(".");
	}
	std::cout << std::setw(10) << temp  << std::flush;
	if (dopipe == 1)
		std::cout << "|" << std::flush;
}

void PhoneBook::searchContact() 
{
	if (this->_numContacts == 0)
		std::cout << std::endl << "You have no contacts yet." << std::endl;
	if (this->_numContacts == 0)
		return ;
	for (int i = 0; i < this->_numContacts && i < 8; i++) {
		printer(std::to_string(i), 1);
		printer(this->_contacts[i].getFirstName(), 1);
		printer(this->_contacts[i].getLastName(), 1);
		printer(this->_contacts[i].getNickName(), 0);
		std::cout << std::endl;
	}
	std::cout << std::endl << "Enter the index (First column) value of the contact you want to see. Write 'EXIT' to return to the main menu.\n";
	std::string temp;
	if (!(std::getline(std::cin, temp))) {
		std::cout << "EOF (Ctrl+D) detected. Exiting." << std::endl;
		exit(1);
	}
	if (temp == "EXIT")
		return ;
	try {
		int number = std::stoi(temp);
		if (number >= 8 || number < 0 || (number + 1) > this->_numContacts) {
			std::cout << "This contact does not exist." << std::endl;
			return ;
		}
		std::cout << std::endl << this->_contacts[number].getFirstName() << std::endl << this->_contacts[number].getLastName() 
					<< std::endl << this->_contacts[number].getNickName() << std::endl << this->_contacts[number].getPhoneNumber() 
					<< std::endl << this->_contacts[number].getSecret() << std::endl;
	}
	catch (const std::invalid_argument& e) {
		std::cerr << "Your argument is not an integer." << std::endl;
	}
	catch (const std::out_of_range& e) {
		std::cerr << "Your argument is outside the range of an integer." << std::endl;
	}
}
