/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:54:19 by ahooghe           #+#    #+#             */
/*   Updated: 2023/11/05 17:11:07 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void handleQuitSignal(int signal)
{
	(void)signal;
	std::cerr << std::endl;
}

int main(void)
{
	std::string command;
	PhoneBook myPhoneBook;
	
	signal(SIGQUIT, handleQuitSignal);
	std::cout << "Welcome to the LOCALIZED PHONEBOOK PR0T0C0L. Please use one of the following commands as needed." 
				<< std::endl;
	while (command.compare("EXIT") != 0) {
		std::cout << std::endl << "ADD\tWhen you enter this command, you can add a new contact to the phone book." << std::endl 
					<< "SEARCH\tWhen you enter this command, you can find the information of a saved contact." << std::endl 
					<< "EXIT\tYou close the phonebook and all its content is lost forever." << std::endl << std::endl;
		if (!(std::getline(std::cin, command)))	{
				std::cout << "EOF (Ctrl+D) detected. Exiting." << std::endl;
				exit (1);
			}
		if (command.compare("ADD") == 0) {
			myPhoneBook.addContact();
		}
		if (command.compare("SEARCH") == 0)	{
			myPhoneBook.searchContact();
		}
	}
	return (0);
}
