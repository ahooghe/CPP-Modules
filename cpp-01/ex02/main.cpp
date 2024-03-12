/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:30:28 by ahooghe           #+#    #+#             */
/*   Updated: 2023/10/18 20:33:57 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *ptr = &brain;
    std::string &ref = brain;
    
    std::cout << "The Memory address of the string variable is: " << &brain << std::endl;
    std::cout << "The Memory address of the pointer to the string variable is: " << &ptr << std::endl;
    std::cout << "The Memory address of the reference to the string variable is: " << &ref << std::endl;
    std::cout << "The value of the string variable is: " << brain << std::endl;
    std::cout << "The value of the pointer to the string variable is: " << ptr << std::endl;
    std::cout << "The value of the reference to the string variable is " << ref << std::endl;
}
